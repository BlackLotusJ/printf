#include "main.h"
/**
 * print_string - print a string.
 * @args: arguments
 * @chars_printed: chars printed
 * Return: the length of the string.
 */

int print_string(va_list args, chars_printed)
{
	char *str = va_arg(args, char *);

	while (*str != '\0')
	{
		_putchar(*str);
		chars_printed++;
		str++;
	}
	return (chars_printed);
}
