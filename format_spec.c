#include "main.h"
/**
 * print_string - outputs a string
 * @list: list of args
 * Return: 1 success
 */
int print_string(va_list list)
{
	char *str;

	str = va_arg(list, char*);
	if (str == NULL)
		str = "null";
	for (int i == 0; str[i] != '\0'; i++)
	{
		_write(str[i]);
	}
	return (1);
}
/**
 * print_char - outputs a character
 * @list: list if args
 * Return: 1 success
 */
int print_char(va_list list)
{
	_write(va_arg(list, int));
	return (1);
}
