#!/bin/bash
rm -rf ./_builds
cmake -S . -DCMAKE_BUILD_TYPE=Debug -B _builds
#cmake -S . -DCMAKE_BUILD_TYPE=Release -B _builds
cd _builds
make
