# 0x0F. Function Pointers

This directory contains solutions to problems related to function pointers in C programming. Function pointers are pointers that point to functions instead of data. They allow dynamic function calls, enabling more flexible and reusable code. This directory will help you understand how to declare, initialize, and use function pointers, as well as how to use them in various scenarios.

## Directory Contents

- `0-print_name.c`: A function that takes a string and a pointer to a function, and calls the function to print the string.
- `1-array_iterator.c`: A function that iterates over an array and performs a function on each element.
- `2-int_index.c`: A function that searches for an integer in an array and returns the index where it's found, using a function pointer.
- `3-calc.h`: A header file that defines a calculator with operations such as addition, subtraction, multiplication, and division using function pointers.
- `3-op_functions.c`: A file that contains functions implementing the basic calculator operations.
- `3-get_op_func.c`: A function that selects the correct function for a given operation, such as addition or subtraction.
- `3-main.c`: A program that demonstrates the use of the calculator operations using function pointers.

## Purpose

This directory focuses on the concept of function pointers, which are essential for creating flexible, modular, and dynamic programs. By learning how to use function pointers, you can build more generic code and avoid hardcoding function calls. These problems will help you understand how to use function pointers for tasks such as iterating over arrays, implementing callbacks, and creating dynamic function dispatchers.

## Compilation

To compile the programs, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program

