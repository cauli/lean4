import fs from 'node:fs';
import path from 'node:path';
import http from 'node:http';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';
import { chromium } from '@playwright/test';
import walk from './artifact-files.cjs';

const args = process.argv.slice(2);
if (!args[0]) throw new Error('expected a toolchain directory');
const root = path.resolve(args.shift());
const bin = path.resolve(args[0] && !args[0].startsWith('--') ? args.shift() : path.join(root, 'bin'));
const initOnly = args.includes('--init-only');
const memoryProbe = args.includes('--memory-probe');
const snapshot = args.find(arg => arg.startsWith('--snapshot='))?.slice('--snapshot='.length);
const here = path.dirname(fileURLToPath(import.meta.url));
const library = path.join(root, 'lib/lean');
const files = snapshot && initOnly ? [] : walk(library);
const server = http.createServer((req, res) => {
  res.setHeader('Cross-Origin-Opener-Policy', 'same-origin');
  res.setHeader('Cross-Origin-Embedder-Policy', 'require-corp');
  if (req.url === '/') {
    res.setHeader('Content-Type', 'text/html');
    return res.end('<!doctype html><title>Lean browser smoke test</title>');
  }
  if (req.url === '/files.json') {
    res.setHeader('Content-Type', 'application/json');
    return res.end(JSON.stringify({ files, initOnly, memoryProbe, snapshot: Boolean(snapshot) }));
  }
  const url = decodeURIComponent(req.url);
  let target;
  if (url === '/bin/lean.js' || url === '/bin/lean.wasm') target = path.join(bin, path.basename(url));
  else if (url === '/checks.cjs' || url === '/browser-worker.js') target = path.join(here, url.slice(1));
  else if (url.startsWith('/lib/lean/') && files.includes(url.slice(10))) target = path.join(library, url.slice(10));
  if (url === '/init.snap' && snapshot) target = path.resolve(snapshot);
  if (!target) { res.writeHead(404); return res.end(); }
  res.setHeader('Content-Type', target.endsWith('.wasm') ? 'application/wasm' :
    /\.(js|cjs)$/.test(target) ? 'text/javascript' : 'application/octet-stream');
  fs.createReadStream(target).on('error', () => res.destroy()).pipe(res);
});
await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
let browser;
try {
  browser = await chromium.launch();
  const page = await browser.newPage();
  page.on('console', message => {
    if (message.type() === 'error' || /^(WASM smoke:|\[PROFILE:IMPORT\])/.test(message.text())) console.error(message.text());
  });
  await page.goto(`http://127.0.0.1:${server.address().port}`);
  const result = await page.evaluate(() => new Promise((resolve, reject) => {
    if (!crossOriginIsolated) return reject(new Error('SharedArrayBuffer requires isolation'));
    const worker = new Worker('/browser-worker.js');
    const timeout = setTimeout(() => { worker.terminate(); reject(new Error('browser smoke timed out')); }, 240000);
    worker.onerror = event => { clearTimeout(timeout); worker.terminate(); reject(new Error(event.message)); };
    worker.onmessage = ({ data }) => {
      clearTimeout(timeout); worker.terminate();
      if (data.error) reject(new Error(data.error)); else resolve(data);
    };
  }));
  const hashes = Object.fromEntries(['lean.js', 'lean.wasm'].map(name =>
    [name, createHash('sha256').update(fs.readFileSync(path.join(bin, name))).digest('hex')]));
  console.log(JSON.stringify({ browser: browser.version(), hashes, ...result }));
} finally {
  await browser?.close();
  server.closeAllConnections();
  await new Promise(resolve => server.close(resolve));
}
