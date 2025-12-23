## ft_printf

*This project has been created as part of the 42 curriculum by pidi.*  

## Description

This project reimplements `printf`, a function from the C standard I/O library `<stdio.h>`, to learn how formatted output and variadic functions work. It focuses on handling the basic conversion specifiers without reproducing the full buffering and flag system of the original function.

## Supported features

`ft_printf` reproduces a subset of the original `printf` behaviour and handles the following conversion specifiers: [web:293]

- `char` type variables (`%c`)  
- `string` type variables (`%s`)  
- `int` type variables (`%d` / `%i`)  
- `unsigned int` type variables (`%u`)  
- hexadecimal integers, lowercase and uppercase (`%x` / `%X`)  
- pointers (`%p`)  
- the literal percent sign (`%%`)

Each helper function is responsible for printing one specific data type and returns the number of characters it wrote, which is then accumulated into the total `ft_printf` return value.  
This implementation uses utility functions from the 42 Libft library (for example for string and number handling).

## How it works (Algorithm & design)

`ft_printf` iterates through the format string character by character; normal characters are printed directly with `ft_printchar`, while a `%` triggers a call to `ft_format` with the next character as the format specifier. `ft_format` uses a chain of `if` / `else if` checks on that specifier (`c`, `s`, `p`, `d` / `i`, `u`, `x` / `X`, `%`) and calls the matching helper function (`ft_printchar`, `ft_printstr`, `ft_printptr`, `ft_printnbr`, `ft_print_unsigned`, `ft_print_hex`, `ft_printpercent`), each of which returns the number of characters it wrote. These return values are accumulated into a running total `len` inside both `ft_format` and `ft_printf`, and after the loop finishes, `va_end` is called and `ft_printf` returns the total number of printed characters, mimicking the behavior of the standard `printf`.

## Instructions

- Run `make` to compile the library and generate `libftprintf.a`.
