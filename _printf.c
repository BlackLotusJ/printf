#include "main.h"
/**
 * _printf - custom printf function
 * @format: A string containing all the desired characters
 * Return: Countof characters printed
 */
int _printf(const char *format, ...)
{
	int chars_printed = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			chars_printed = parse(format, args, chars_printed);
			format++;
		}
		else
		{
			_putchar(*format);
			chars_printed++;
			format++;
		}
	}
	va_end(args);
	return (chars_printed);
}
