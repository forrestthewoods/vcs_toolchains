#!/bin/bash

# Navigate to script dir
cd "$(dirname "$0")"

# Clear environment
#export PATH=""

./toolchains/linux/ubuntu/cmake/bin/cmake -G Ninja -D CMAKE_MAKE_PROGRAM=./toolchains/linux/ubuntu/ninja/ninja