#!/bin/bash
rm -rf ./_builds
rm -rf ./compile_commands.json
cmake -S . -DCMAKE_BUILD_TYPE=Debug -B _builds -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
#cmake -S . -DCMAKE_BUILD_TYPE=Release -B _builds
ln -s ./_builds/compile_commands.json ./
cd _builds
make
