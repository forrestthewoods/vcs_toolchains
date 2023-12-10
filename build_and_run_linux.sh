#!/bin/bash

# Everything is relative to script dir
SCRIPT_RELDIR=$(dirname "$0")
echo "Script dir is $SCRIPT_DIR"

SCRIPT_ABSDIR=$(readlink -f $SCRIPT_RELDIR)

# Nuke old directories
rm -rf "$SCRIPT_RELDIR/build"
rm -rf "$SCRIPT_RELDIR/bin"

# Create dirs
mkdir "$SCRIPT_RELDIR/build"

# Nuke environment
export PATH=""

# Move to build dir
cd "$SCRIPT_ABSDIR/build"

# build
../toolchains/linux/cmake/bin/cmake -G Ninja -D CMAKE_MAKE_PROGRAM=$SCRIPT_ABSDIR/toolchains/linux/ninja/ninja ..
../toolchains/linux/ninja/ninja -v

# navigate back
cd ..

# run
./bin/main