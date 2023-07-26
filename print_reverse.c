#include "main.h"
/**
 * printf_reverse - prints a binary number
 * @args: arguements
 * @chars_printed: the printed characters
 * Return: printed charcaters
 */
int printf_reverse(va_list args, int chars_printed)
{
	char *str = va_arg(args, char *);
	int len = 0, i;

	while (str[len])
	{
		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(str[i]);
		chars_printed++;
	}

	return (chars_printed);
}
