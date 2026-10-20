#!/usr/bin/env bash

set -e

if [ "$#" -ne 1 ]; then
    echo "Usage: $0 <experiment_name>"
    echo "Example: $0 ogehl_cbp1"
    exit 1
fi

NAME="$1"
ROOT="experiments/$NAME"

if [ -e "$ROOT" ]; then
    echo "Error: $ROOT already exists."
    exit 1
fi

mkdir -p \
    "$ROOT/paper" \
    "$ROOT/reference/upstream" \
    "$ROOT/reference/extracted" \
    "$ROOT/spec" \
    "$ROOT/prompts" \
    "$ROOT/responses" \
    "$ROOT/rtl" \
    "$ROOT/verification" \
    "$ROOT/results"

touch \
    "$ROOT/metadata.md" \
    "$ROOT/sources.md" \
    "$ROOT/spec/spec.md" \
    "$ROOT/checksums.sha256"

echo "Created experiment:"
echo
find "$ROOT" -maxdepth 3 -print | sort