#!/bin/bash

# format every .h .cpp file in the repo
path=$(git rev-parse --show-toplevel)/
find "$path" -iname "*.h" -o -iname "*.cpp" | xargs clang-format-10 -i
