#!/bin/bash
# Usage: ./run_cpp.sh file_name.cpp
# Compiles and runs the given C++ file

if [ $# -ne 1 ]; then
  echo "Usage: $0 <file.cpp>"
  exit 1
fi

src="$1"
exe="${src%.cpp}.exe"

C:/mingw64/bin/g++.exe -std=c++17 -O2 -Wall "$src" -o "$exe"
if [ $? -eq 0 ]; then
  echo "--- Output ---"
  "$exe"
else
  echo "Compilation failed."
fi
