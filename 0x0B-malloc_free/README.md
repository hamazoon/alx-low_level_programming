# 0x0B. Malloc, Free

This directory contains solutions to problems related to memory allocation and deallocation in C programming. In C, memory management is crucial to avoid memory leaks and to properly allocate and free memory as needed. These exercises demonstrate how to use functions like `malloc` and `free` to manage dynamic memory in C.

## Directory Contents

- `0-create_array.c`: A function that creates an array of characters and initializes it with a specific char.
- `1-strdup.c`: A function that returns a pointer to a newly allocated space in memory, which contains a copy of the given string.
- `2-str_concat.c`: A function that concatenates two strings into a newly allocated space in memory.
- `3-alloc_grid.c`: A function that returns a pointer to a 2-dimensional array of integers, with each element initialized to 0.
- `4-free_grid.c`: A function that frees a 2-dimensional grid of integers.
- `5-argstostr.c`: A function that concatenates all arguments of a program into a single string.
- `100-strtow.c`: A function that splits a string into words and returns an array of strings.

## Purpose

This directory focuses on dynamic memory allocation in C, specifically using `malloc` and `free`. Through these problems, you will learn how to allocate memory dynamically, initialize it, and properly free it to prevent memory leaks.

## Compilation

To compile the programs, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program

