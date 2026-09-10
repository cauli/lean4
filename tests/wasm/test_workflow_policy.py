"""Keep default-branch browser builds separate from upstream publication jobs."""

import json
import re
import unittest
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
WORKFLOWS = ROOT / ".github/workflows"


def job_header(filename, job):
    source = (WORKFLOWS / filename).read_text()
    match = re.search(rf"^  {re.escape(job)}:\n(.*?)(?=^  [\w-]+:|\Z)", source, re.M | re.S)
    if not match:
        raise AssertionError(f"Job {job} is missing from {filename}")
    return match.group(1).split("    steps:", 1)[0]


class BrowserWorkflowPolicyTest(unittest.TestCase):
    def test_upstream_mutation_jobs_are_repository_guarded(self):
        jobs = {
            "update-stage0.yml": ["update-stage0"],
            "jira.yml": ["jira-sync"],
            "backport.yml": ["backport"],
            "restart-on-label.yml": ["restart-on-label"],
            "stale.yml": ["stale"],
            "labels-from-comments.yml": ["update-label"],
            "ci.yml": ["configure", "release", "release-nightly"],
            "pr-release.yml": ["on-success"],
            "adaptation-pr.yml": ["main"],
            "grove.yml": ["grove-build"],
        }
        for filename, names in jobs.items():
            for name in names:
                with self.subTest(workflow=filename, job=name):
                    header = job_header(filename, name)
                    self.assertIn("if:", header)
                    self.assertIn("github.repository == 'leanprover/lean4'", header)

    def test_browser_build_cannot_publish_releases(self):
        source = (WORKFLOWS / "browser.yml").read_text()
        self.assertIn("permissions:\n  contents: read\n", source)
        self.assertNotIn("secrets: inherit", source)
        self.assertIn("RELEASE_TAG: ''", source)
        self.assertIn("nightly: ''", source)
        self.assertIn("github.repository != 'leanprover/lean4'", job_header("browser.yml", "configure"))

    def test_manual_sidecars_use_read_only_tokens_and_safe_inputs(self):
        for filename in ["build-batteries.yml", "debug-import-runaway.yml",
                         "build-browser-mathlib-manifold-closure.yml"]:
            with self.subTest(workflow=filename):
                source = (WORKFLOWS / filename).read_text()
                self.assertIn("permissions:\n  contents: read\n  actions: read\n", source)
                self.assertIn("  workflow_dispatch:", source)
                self.assertNotRegex(source, r"(?m)^  (?:push|schedule|workflow_run):")
                self.assertIn('[[ "$TOOLCHAIN_RUN_ID" =~ ^[0-9]+$ ]]', source)
                self.assertNotRegex(source, r"--(?:version|githash)[^\n]*\|\| true")
                for line in source.splitlines():
                    if "${{ inputs." in line:
                        self.assertRegex(line.strip(), r"^[A-Z_]+: ")

    def test_sidecar_input_sources_are_checked_before_download(self):
        checks = [
            "test \"$(jq -r '.repository.full_name' <<< \"$RUN\")\" = \"${{ github.repository }}\"",
            "test \"$(jq -r '.head_repository.full_name' <<< \"$RUN\")\" = \"${{ github.repository }}\"",
            "test \"$(jq -r '.path' <<< \"$RUN\")\" = .github/workflows/browser.yml",
        ]
        for filename in ["build-batteries.yml", "debug-import-runaway.yml",
                         "build-browser-mathlib-manifold-closure.yml"]:
            with self.subTest(workflow=filename):
                source = (WORKFLOWS / filename).read_text()
                before_download = source.split("      - name: Download", 1)[0]
                for check in checks:
                    self.assertIn(check, before_download)

    def test_batteries_default_follows_mathlib_dependency_lock(self):
        source = (WORKFLOWS / "build-batteries.yml").read_text()
        self.assertIn(".github/browser-mathlib-manifold-closure.lock.json", source)
        self.assertIn('BATTERIES_REV=${REQUESTED_BATTERIES_REV:-$LOCKED_BATTERIES_REV}', source)
        self.assertIn('lake env lean browser-import-check.lean', source)
        self.assertNotIn("2b34cb1ec906fc05cd8e0993588896c99917f33b", source)

    def test_mathlib_lock_tracks_current_upgrade(self):
        lock = json.loads((ROOT / ".github/browser-mathlib-manifold-closure.lock.json").read_text())
        self.assertEqual(lock["lean"]["toolchain"], "leanprover/lean4:v4.33.1")
        self.assertFalse(lock["fullMathlib"])
        self.assertEqual(len(lock["mathlib"]["roots"]), 3)
        self.assertIn("Mathlib.Geometry.Manifold.IsManifold.Basic", lock["mathlib"]["roots"])


if __name__ == "__main__":
    unittest.main()
