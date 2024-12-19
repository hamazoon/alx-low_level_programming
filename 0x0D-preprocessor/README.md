# 0x0D. Preprocessor

This directory contains solutions to problems related to the C preprocessor. The preprocessor is a tool that processes your source code before it is compiled. It handles tasks like file inclusion, macro expansion, conditional compilation, and other manipulations of code. This directory explores various preprocessor directives that are essential for understanding the compilation process in C.

## Directory Contents

- `0-object_like_macro.h`: A header file that defines a macro `SIZE` with a value of 1024.
- `1-pi.h`: A header file that defines a macro `PI` with the value of 3.14159265359.
- `2-main.c`: A C program that prints the name of the file it was compiled from.
- `3-function_like_macro.h`: A header file that defines a macro `ABS(x)` that computes the absolute value of a number.
- `4-sum.h`: A header file that defines a macro `SUM(x, y)` that computes the sum of two numbers.

## Purpose

This directory provides an introduction to various preprocessor features in C. The preprocessor allows the creation of reusable and more efficient code using macros, conditional compilation, and file inclusion. By solving the problems in this directory, you will get hands-on experience with how preprocessor directives work in C.

## Compilation

You can compile the programs by using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program

