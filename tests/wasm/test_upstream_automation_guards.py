import re
import unittest
from pathlib import Path


WORKFLOWS = Path(__file__).resolve().parents[2] / ".github/workflows"
UPSTREAM = "github.repository == 'leanprover/lean4'"


def job_condition(filename, job):
    source = (WORKFLOWS / filename).read_text()
    match = re.search(rf"^  {re.escape(job)}:\n(.*?)(?=^  [\w-]+:|\Z)", source, re.M | re.S)
    if not match:
        raise AssertionError(f"Job {job} is missing from {filename}")
    header = match.group(1).split("    steps:", 1)[0].splitlines()
    for index, line in enumerate(header):
        if line.startswith("    if:"):
            parts = [line.removeprefix("    if:").strip()]
            if parts == [">"]:
                parts = []
            for continuation in header[index + 1:]:
                if not continuation.strip():
                    continue
                if not continuation.startswith("      "):
                    break
                parts.append(continuation.strip())
            return " ".join(parts)
    return None


def tokens(expression):
    return re.findall(r"'[^']*'|[^\s]", expression)


class WorkflowScopeTest(unittest.TestCase):
    def test_unconditional_mutations_are_upstream_only(self):
        for filename, job in [
            ("update-stage0.yml", "update-stage0"),
            ("jira.yml", "jira-sync"),
            ("stale.yml", "stale"),
        ]:
            with self.subTest(workflow=filename):
                self.assertEqual(job_condition(filename, job), UPSTREAM)

    def test_existing_predicates_remain_required(self):
        conditions = {
            ("backport.yml", "backport"): (
                UPSTREAM + " && github.event.pull_request.merged && ("
                "github.event.action == 'closed' || ("
                "github.event.action == 'labeled' && "
                "contains(github.event.label.name, 'backport')))"
            ),
            ("restart-on-label.yml", "restart-on-label"): (
                UPSTREAM + " && (" + " || ".join(
                    f"contains(github.event.label.name, '{label}')"
                    for label in ["merge-ci", "release-ci", "lake-ci", "fsanitize-ci", "macos-arm-ci"]
                ) + ")"
            ),
            ("labels-from-comments.yml", "update-label"): (
                UPSTREAM + " && (github.event.issue.pull_request != null && (" + " || ".join(
                    f"contains(github.event.comment.body, '{label}')"
                    for label in ["awaiting-review", "awaiting-author", "WIP", "release-ci", "lake-ci", "changelog-"]
                ) + "))"
            ),
        }
        for (filename, job), expected in conditions.items():
            with self.subTest(workflow=filename):
                actual = job_condition(filename, job)
                self.assertIsNotNone(actual)
                self.assertEqual(tokens(actual), tokens(expected))

    def test_stage0_label_step_is_scoped_without_skipping_the_check(self):
        filename = "check-stage0.yml"
        self.assertIsNone(job_condition(filename, "check-stage0-on-queue"))
        source = (WORKFLOWS / filename).read_text()
        self.assertIn(
            "    - if: " + UPSTREAM + " && github.event_name == 'pull_request'\n"
            "      name: Set label\n",
            source,
        )

    def test_release_jobs_keep_their_existing_predicates(self):
        for job, original in [
            ("release", "startsWith(github.ref, 'refs/tags/')"),
            ("release-nightly", "needs.configure.outputs.nightly"),
        ]:
            with self.subTest(job=job):
                self.assertEqual(job_condition("ci.yml", job), original + " && " + UPSTREAM)


if __name__ == "__main__":
    unittest.main()
