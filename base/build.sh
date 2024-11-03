#!/bin/bash
rm -rf ./build
cmake -S . -DCMAKE_BUILD_TYPE=Debug -B build
cd build
make
