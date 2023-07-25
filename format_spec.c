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
/**
 * print_int - prints an integer
 * @list: list of args
 * Return: character printed
 */
int print_int(va_list list)
{
	int num_length = print_num(list);
	return (num_length);
}
/**
 * unsigned_int - outputs unsigned integer
 * @list: List of arguments
 * Return: count of numbers
 */
int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (print_unsigned_num(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
