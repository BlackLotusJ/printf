#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

/*Main Functions*/
int parse(const char *format, va_list args, int chars_printed);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args, int chars_printed);
int print_char(va_list args, int chars_printed);
int print_integer(va_list args, int chars_printed);
int print_binary(unsigned int num, int chars_printed);
int print_octal(unsigned int num, int chars_printed);
int print_hex(va_list list);
int print_heX(va_list list);
int print_reversed(va_list args, int chars_printed);
int rot13(va_list);

#endif
