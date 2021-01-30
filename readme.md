# minimal example to use mimium as C++ Library

This is an example library to import [mimium](https://github.com/mimium-org/mimium) as a C++ library with CMake.

# Introduction

1. Install CMake

2. Install mimium via homebrew or download from github release and place `lib/xxx.dylib` manually into `/usr/local/lib/mimium/` and `share/cmake/mimium/**` into `/usr/local/share/`.

3. Run `cmake -Bbuild . && cmake --build build -j`

If the build successfully finished, `build/mimium_libimport` will be generated and it has same functionality as `mimium` command line tool.