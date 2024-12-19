# 0x09. Static Libraries

This directory contains solutions to problems related to static libraries in C programming. A static library is a collection of object files that are linked into a program during the linking phase of compilation. It is commonly used to organize reusable code into a single file, which can then be linked to multiple programs.

## Directory Contents

- `libmy.a`: The static library containing functions that can be used by other C programs. It includes the implementation of various functions such as basic arithmetic, string manipulation, and other utility functions.
- `main.c`: A sample program that demonstrates how to link and use the static library.
- `create_static_lib.sh`: A shell script used to create the static library `libmy.a` from the `.c` files in the repository. It automates the process of creating the library.

## Purpose

This directory demonstrates how to create and use static libraries in C. The exercises and the provided shell script help you understand the process of compiling object files, archiving them into a static library, and linking that library into a C program.

## Compilation

To create the static library, use the provided `create_static_lib.sh` script:

```bash
./create_static_lib.sh

