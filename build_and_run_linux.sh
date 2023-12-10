#!/bin/bash

# Everything is relative to script dir
SCRIPT_DIR=$(dirname "$0")

# Nuke old directories
rm -rf "$SCRIPT_DIR/build"
rm -rf "$SCRIPT_DIR/bin"

# Create dirs
mkdir "$SCRIPT_DIR/build"

# Nuke environment
export PATH=""
#export CC="./toolchain/linux/scripts/zig_cc.sh"
#export CXX="./toolchain/linux/scripts/zig_cxx.sh"

# Linux is stupid
#export CC="$SCRIPT_DIR/toolchains/linux/zig/zig cc"
#export CXX="$SCRIPT_DIR/toolchains/linux/zig/zig c++"

# Move to build dir
cd "$SCRIPT_DIR/build"

# build
../toolchains/linux/cmake/bin/cmake -G Ninja -D CMAKE_MAKE_PROGRAM=~/code/vcs_toolchains/toolchains/linux/ninja/ninja ..
../toolchains/linux/ninja/ninja -v

# navigate back
cd ..

# run
./bin/main