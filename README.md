# ft_printf

This project is part of the 42 school curriculum. The goal is to recreate the famous C library printf function.

## Project Overview

ft_printf aims to mimic the behavior of the standard C library printf function. This project teaches about variadic arguments and reinforces string manipulation skills. Key features include:

- Implementing the following conversions: c, s, p, d, i, u, x, X, %
- Handling various flags: -, 0, ., *
- Managing field width and precision

## Usage

1. Clone the repository:
```
git clone [repository-url]
```
2. Compile the library:
````
make
````


3. Include the header in your C files:
```c
#include "ft_printf.h"
```
4. Compile your project with the ft_printf library:
```
gcc -L. -lftprintf your_file.c
```
## Function Prototype
- int ft_printf(const char *format, ...);

## Supported Conversions
- %c: Character
- %s: String
- %p: Pointer address
- %d: Signed decimal integer
- %i: Signed decimal integer
- %u: Unsigned decimal integer
- %x: Unsigned hexadecimal integer (lowercase)
- %X: Unsigned hexadecimal integer (uppercase)
- %%: Percent sign

## Example
````
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
````
