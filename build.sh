#!/bin/bash

export OUTPUT_DIR="/Users/joseph280996/Code/Personal/Projects/img_processing/output"
export CMAKE_EXPORT_COMPILE_COMMANDS=1

rm -rf build

mkdir build 
cd build
cmake ..
make

mv flip ..
mv compile_commands.json ..
