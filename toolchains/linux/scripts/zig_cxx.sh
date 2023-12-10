#!/bin/bash

# Everything is relative to script dir
SCRIPT_DIR=$(dirname "$0")

"$SCRIPT_DIR/../zig/zig c++" "$@"