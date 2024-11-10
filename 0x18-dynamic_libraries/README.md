# Dynamic Libraries in C

## Overview

A **dynamic library** (also called a shared library) is a collection of functions and code that can be loaded into a program at runtime, allowing multiple programs to share the same code, saving memory and storage.

### Key Differences: Static vs. Dynamic Libraries

- **Static Library (.a)**: Code is linked at compile-time; results in larger executables.
- **Dynamic Library (.so)**: Code is linked at runtime; smaller executables that share code in memory.

### Creating a Dynamic Library

1. **Write the library code**:
   ```c
   // mymath.c
   int add(int a, int b) { return a + b; }
   int subtract(int a, int b) { return a - b; }

### $LD_LIBRARY_PATH
- $LD_LIBRARY_PATH is an environment variable listing directories the system searches for dynamic libraries at runtime.

### Helpful Commands
* nm libname.so: Lists symbols (functions, variables) in the library.
* ldd ./program: Shows dynamic libraries required by the program.
* ldconfig: Updates the system’s library cache (requires sudo).