#include "main.h"
/**
 * _printf - custom printf function
 * @form: A string containing all the desired characters
 * Return: Countof characters printed
 */
int _printf(const char *format, ...)
{
	int chars_printed;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer}
		{"b", print_binary},
		{"r", print_reversed},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{"R", rot13},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);
	va_start(arg_list, format);
	/*Call parser function*/
	chars_printed = parse(format, f_list, arg_list);
	va_end(arg_list);
	return (chars_printed);
}
