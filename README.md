# printf

✅ Passed with 100/100

An adapted version of the standard C printf() function tailored for the 42 school project. This custom implementation supports a restricted set of format specifiers and endeavors to emulate fundamental features found in the original printf() function.

## Usage

1. Compile the project using the supplied Makefile by executing the `make` command.
2. Incorporate the `ft_printf.h` header file into your project.
3. Utilize the `ft_printf()` function, providing the desired format string and corresponding arguments.

## Format specifiers

- `%c`: Character
- `%s`: String
- `%X`: Unsigned hexadecimal integer (uppercase)
- `%x`: Unsigned hexadecimal integer (lowercase)
- `%d` or `%i`: Signed decimal integer
- `%u`: Unsigned decimal integer
- `%p`: Pointer address
- `%%`: Literal '%' character

## Limitations

This implementation lacks support for the complete array of features offered by the standard `printf()` function, including aspects like field width, precision, and flags. Its purpose is primarily educational, serving as a foundational starting point for potential future enhancements.
