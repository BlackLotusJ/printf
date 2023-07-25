#include "main.h"
/**
 * print_reverse - reverses a function and prints a string
 * @arg: arguement passed to the function
 * Return: amount of characters printed
 */
int print_reverse(va_list arg)
{
	int len;
	char *str, *ptr;

	str = va_arg(arg, char *);
	if (str == NULL)
		return (-1);
	ptr = rev_string(str);
	if (ptr == NULL)
		return (=1);
	for (len = 0; ptr[len] != '\0'; len++)
		_write(ptr[len]);
	free(ptr);
	return (len);
}
