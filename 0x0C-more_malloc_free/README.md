# 0x0C. More Malloc, Free

This directory contains solutions to problems that expand on memory allocation and deallocation in C programming. The focus here is on dynamic memory allocation, with additional challenges involving the use of `malloc` and `free` to handle more complex memory management tasks such as resizing, initialization, and handling memory for various data structures.

## Directory Contents

- `0-malloc_checked.c`: A function that allocates memory using `malloc` and exits with a status of 98 if the allocation fails.
- `1-string_nconcat.c`: A function that concatenates two strings with a specified number of characters from the second string.
- `2-calloc.c`: A function that allocates memory for an array of `nmemb` elements, each of a given size, and initializes it to zero.
- `3-array_range.c`: A function that creates an array of integers from `min` to `max`, inclusive.
- `100-realloc.c`: A function that reallocates a memory block to a new size using `realloc`.
- `101-mul.c`: A program that multiplies two positive numbers passed as arguments, implemented with memory management to handle large input values.

## Purpose

This directory covers more advanced topics in dynamic memory management. It extends on previous knowledge of `malloc` and `free` by introducing memory reallocation (`realloc`), zero-initialization (`calloc`), and handling various types of arrays and data structures dynamically.

## Compilation

To compile the programs, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program

