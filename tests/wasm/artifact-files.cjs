const fs = require('node:fs');
const path = require('node:path');

// Match the browser distribution: exported oleans and both executable IR parts.
module.exports = function walk(dir, prefix = '') {
  return fs.readdirSync(dir, { withFileTypes: true }).flatMap(entry => {
    const name = prefix + entry.name;
    if (entry.isDirectory()) return walk(path.join(dir, entry.name), name + '/');
    return /^(Init|Std|Lean)(\/|\.)/.test(name) && /\.(olean|ir|ir\.sig)$/.test(name) ? [name] : [];
  });
};
