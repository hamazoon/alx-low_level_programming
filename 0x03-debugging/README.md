# 0x03. Debugging

This directory contains projects and tasks that focus on debugging techniques in C programming. These exercises are part of the ALX Software Engineering Program and emphasize identifying and fixing errors in code.

## Project Objectives

- Understand and practice the debugging process.
- Use debugging tools effectively, such as `gdb`.
- Learn to identify logical, syntax, and runtime errors in C programs.
- Explore common debugging strategies and techniques.

## Files and Descriptions

| Filename               | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| `0-main.c`             | A test file to debug and identify issues in a function that determines if a number is positive or negative. |
| `1-main.c`             | Debugging a code that causes an infinite loop.                             |
| `2-largest_number.c`   | A corrected version of a function that returns the largest of three numbers. |
| `3-print_remaining_days.c` | Debugging a program that calculates the remaining days in a year, considering leap years. |

## Usage

1. Clone this repository:
   ```bash
   git clone https://github.com/hamazoon/alx-low_level_programming.git
   cd alx-low_level_programming/0x03-debugging
   ```

2. Compile and run the C programs:

   - To compile a program, use:
     ```bash
     gcc program_name.c -o output_name
     ```

   - To run the compiled program, use:
     ```bash
     ./output_name
     ```

3. Debug using `gdb`:

   - Start the debugger:
     ```bash
     gdb ./output_name
     ```
   - Set breakpoints, step through code, and inspect variables as needed.

## Author

This project is developed and maintained by [Hamazoon](https://github.com/hamazoon).

## License

This repository is licensed under the MIT License. See the LICENSE file for more details.

