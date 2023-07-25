#include "main.h"
/**
 * _printf - custom printf function
 * @form: A string containing all the desired characters
 * Return: Countof characters printed
 */
int _printf(const char *form, ...)
{
	int chars_printed;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"o", print_octal},
		{"x", print_hex},
		{NULL, NULL}
	};
	va_list arg_list;

	if (form == NULL)
		return (-1);
	va_start(arg_list, form);
	/*Call parser function*/
	chars_printed = parser(form, f_list, arg_list);
	va_end(arg_list);
	return (chars_printed);
}



