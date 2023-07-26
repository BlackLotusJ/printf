#include "main.h"

/**
 * printf_char - prints a binary number
 * @args: the arguements 
 * @printed: the printed characters
 * Return: printed charcaters
 */

int print_char(va_list args, int chars_printed)
{
	int ch = va_arg(args, int);

	_putchar(ch);
	return (chars_printed + 1);
}
