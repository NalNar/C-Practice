#!/usr/bin/env bash
# Simple shortcut: add everything, commit (with message if provided), then push
# Usage:
#   ./git-ap.sh "commit message"
#   ./git-ap.sh         # opens editor for commit message

set -euo pipefail

usage() {
  cat <<EOF
Usage: git-ap.sh [commit message]

If a message is provided, commits with that message and pushes. If not, opens your editor for a commit message.
EOF
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
  usage
  exit 0
fi

# Stage everything
git add -A

# Commit with message if provided, otherwise open editor
if [[ $# -ge 1 ]]; then
  git commit -m "$*"
else
  git commit
fi

# Push to current upstream
git push
