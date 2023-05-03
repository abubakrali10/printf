# Custom printf function

This project is an implementation of the printf function. The printf function is a commonly used function in the C programming language for printing formatted output to stdout.

## Usage

To use the custom printf function, simply include the header file "holberton.h" and call the function with a format string and any variable arguments that need to be formatted.

```c
#include "main.h"

int main(void)
{
    _printf("Hello, %s!\n", "world");
    return (0);
}
```

The above example would print the string "Hello, world!" to stdout.

## Function signature

The function signature for the custom printf function is:

```c
int _printf(const char *format, ...);
```

The function takes a format string and a variable number of arguments to be formatted according to the format string.

## Supported conversion specifiers

The custom printf function supports the following conversion specifiers:

- `%c`: prints a single character
- `%s`: prints a string
- `%%`: prints a literal percent sign
- `%d` and `%i`: prints an integer in base 10
- `%b`: prints an unsigned integer in binary
- `%u`: prints an unsigned integer in base 10
- `%o`: prints an unsigned integer in octal
- `%x` and `%X`: prints an unsigned integer in hexadecimal (lowercase or uppercase, respectively)
- `%S`: prints a string with non-printable characters replaced with their hexadecimal value
- `%r`: prints a string in reverse order
- `%R`: prints a string with each letter rotated by 13 positions (ROT13)

## Limitations

The custom printf function has the following limitations:

- The function does not support the flag characters used in the standard printf function
- The function does not support field width or precision
- The function does not support length modifiers

## Buffering

In order to minimize the number of calls to the write system call, the custom printf function uses a local buffer of size 1024 characters to store formatted output before writing it to stdout.

## Error handling

If the format string is NULL or if an unsupported conversion specifier is encountered, the function returns -1.

## Future work

Possible future enhancements to the custom printf function could include support for additional conversion specifiers, support for flag characters, field width and precision, and length modifiers.

## Contributors

* [Abubakr Ali](https://github.com/abubakrali10)
* [Amgad Fikry](https://github.com/amgadfikry/printf)
