# 0x10. Variadic Functions

This directory contains solutions to problems related to variadic functions in C programming. Variadic functions are functions that can accept a variable number of arguments. These types of functions allow for more flexible and reusable code, especially when the number of arguments passed is not fixed. This directory will help you understand how to define and use variadic functions using the `stdarg.h` library.

## Directory Contents

- `0-sum_them_all.c`: A function that returns the sum of all its parameters.
- `1-print_numbers.c`: A function that prints numbers, followed by a new line. It accepts a variable number of numbers as arguments.
- `2-print_strings.c`: A function that prints strings, followed by a new line. It accepts a variable number of strings as arguments.
- `3-print_all.c`: A function that prints anything, followed by a new line. It can handle multiple types of data, such as integers, floats, strings, and characters.

## Purpose

This directory covers the usage of variadic functions in C, allowing you to write functions that can accept a variable number of arguments. These problems demonstrate how to use macros like `va_start`, `va_arg`, and `va_end` to process the arguments passed to the function. By solving these problems, you will learn how to create more flexible functions that can handle a dynamic number of inputs.

## Compilation

To compile the programs, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program

