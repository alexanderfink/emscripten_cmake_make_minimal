# Emscripten minimum working example using CMake and Make and linking libraries (archives) on unix
This is a minimal working example for compiling an emscripten project with cmake and make on unix. The code is a simpliefied version of https://github.com/adevaykin/minimal-cmake-emscripten-project

## Compile project
1. Set emscripten path in CMakeLists.txt:10
2. Run the following commands
```
> mkdir build
> cd build
> emcmake cmake ..
> emmake make
```


### Compile and use archives (.a) 
> **Attention:** If you try to use an archive or object file that was not compiled for wasm, it will result in the following error: wasm-ld-13: error: unknown file type: calculator.o. See https://github.com/emscripten-core/emscripten/issues/7972 for further information.

Create an object file with emscripten clang wrapper emcc: `emcc -c -o libsource.o libsource.cpp` 

Create archive with ar wrapper emar: `emar rcs libcalculator.a calculator.o`
## This example was created with the following system: 
**OS:**
```
Ubuntu 22.04.2 LTS
```
**emcc -v**
```
emcc (Emscripten gcc/clang-like replacement + linker emulating GNU ld) 3.1.5 ()
Ubuntu clang version 13.0.1-2ubuntu2.1
Target: wasm32-unknown-emscripten
Thread model: posix
InstalledDir: /usr/bin
```
**cmake --version**
```
cmake version 3.22.1
```
**clang -v**
```
Ubuntu clang version 14.0.0-1ubuntu1
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
Found candidate GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/11
Selected GCC installation: /usr/bin/../lib/gcc/x86_64-linux-gnu/11
Candidate multilib: .;@m64
Selected multilib: .;@m64
```
**make -v**
```
GNU Make 4.3
Built for x86_64-pc-linux-gnu
Copyright (C) 1988-2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
```
