# 0x0E. Structures, Typedef

This directory contains solutions to problems related to structures and typedef in C programming. Structures allow grouping of different types of data together, while typedef is used to define new names for existing types, making code more readable and manageable. This directory will help you understand the usage of both features in C and how they contribute to better data organization and clarity in your programs.

## Directory Contents

- `dog.h`: A header file that defines a `struct dog` with members for the dog's name, age, and owner.
- `1-init_dog.c`: A function that initializes a variable of type `struct dog`.
- `2-print_dog.c`: A function that prints the information of a `struct dog`.
- `3-struct_operations.c`: A program that demonstrates various operations on structures (e.g., initializing, printing, etc.).
- `4-new_dog.c`: A function that creates a new dog (allocates memory for a new `struct dog` and initializes its members).
- `5-free_dog.c`: A function that frees memory allocated for a `struct dog`.

## Purpose

This directory focuses on understanding how to define and use structures in C, as well as how to create and use typedefs for better code readability. These exercises demonstrate how to define structures, initialize them, access their members, and work with dynamically allocated memory for structures. Additionally, they provide insight into how typedefs can be used to simplify type names.

## Compilation

To compile the programs, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o program

