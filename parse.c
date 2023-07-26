#include "main.h"

/**
 * parse - selects the appropriate specifiers
 * @args: arguements
 * @chars_printed: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int parse(const char *format, va_list args, int chars_printed)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			chars_printed = print_integer(args, chars_printed);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			chars_printed++;
			break;
		case 's':
			chars_printed = print_string(args, chars_printed);
			break;
		case '%':
			_putchar('%');
			chars_printed++;
			break;
		case 'b':
			chars_printed = print_binary(va_arg(args, unsigned int), chars_printed);
			break;
		case 'x':
		case 'X':
			chars_printed = _x(va_arg(args, unsigned int), chars_printed, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			chars_printed = print_octal(va_arg(args, unsigned int), chars_printed);
			break;
		case 'u':
			chars_printed = print_unsigned(va_arg(args, unsigned int), chars_printed);
			break;
		case 'r':
			chars_printed = print_reversed(args, chars_printed);
			break;
		case 'p':
			chars_printed = print_pointer(args, chars_printed);
			break;
		default:
			break;
	}
	return (chars_printed);
}
