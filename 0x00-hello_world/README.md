# 0x00. Hello, World

This directory contains introductory projects and tasks for learning low-level programming in C. These exercises are part of the ALX Software Engineering Program and cover the fundamentals of compiling and running C programs, as well as working with the `gcc` compiler and basic C syntax.

## Project Objectives

- Understand the steps of the compilation process: preprocessing, compiling, assembling, and linking.
- Learn to use the `gcc` compiler to compile and debug C programs.
- Write simple C programs to output text.
- Explore the use of comments in C.

## Files and Descriptions

| Filename               | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| `0-preprocessor`       | A script that runs a C file through the preprocessor and saves the result into another file. |
| `1-compiler`           | A script that compiles a C file without linking.                                           |
| `2-assembler`          | A script that generates the assembly code of a C file and saves it to an output file.       |
| `3-name`               | A script that compiles a C file and creates an executable named `cisfun`.                  |
| `4-puts.c`             | A C program that prints exactly "Programming is like building a multilingual puzzle" using `puts`. |
| `5-printf.c`           | A C program that prints exactly "with proper grammar, but the outcome is a piece of art," using `printf`. |
| `6-size.c`             | A C program that prints the size of various types on the computer it is compiled and run on. |
| `100-intel`            | A script that generates the assembly code (Intel syntax) of a C file.                       |
| `101-quote.c`          | A C program that prints a specific quote to the standard error without using `printf` or `puts`. |

## Usage

1. Clone this repository:
   ```bash
   git clone https://github.com/hamazoon/alx-low_level_programming.git
   cd alx-low_level_programming/0x00-hello_world
   ```

2. Make scripts executable (if not already):
   ```bash
   chmod +x 0-preprocessor 1-compiler 2-assembler 3-name 100-intel
   ```

3. Run the scripts or compile and run the C programs:

   - To execute a script, use:
     ```bash
     ./script_name
     ```

   - To compile and run a C program, use:
     ```bash
     gcc program_name.c -o output_name
     ./output_name
     ```

## Author

This project is developed and maintained by [Hamazoon](https://github.com/hamazoon).

## License

This repository is licensed under the MIT License. See the LICENSE file for more details.

