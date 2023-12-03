#!/bin/bash

# Everything is relative to script dir
SCRIPT_DIR=$(dirname "$0")

# Nuke old directories
rm -rf "$SCRIPT_DIR/build"
rm -rf "$SCRIPT_DIR/bin"

# Create dirs
mkdir "$SCRIPT_DIR/build"

# Nuke  environment
export PATH=""

# Move to build dir
cd "$SCRIPT_DIR/build"

# build
../toolchains/linux/ubuntu/cmake/bin/cmake -G Ninja -D CMAKE_MAKE_PROGRAM=~/code/vcs_toolchains/toolchains/linux/ubuntu/ninja/ninja ..
../toolchains/linux/ubuntu/cmake/bin/cmake --build .

# navigate back
cd ..

# run
./bin/main