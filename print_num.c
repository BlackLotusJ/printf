#include "main.h"
/**
 * print_num - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */
int print_num(va_list args)
{
	int n, div = 1, len = 0;
	unsigned int num;

	n  = va_arg(args, int);

	if (n < 0)
	{
		len += _write_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
 * print_unsgined_num - Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */
int print_unsgined_num(unsigned int n)
{
	int div = 1, len = 0;
	unsigned int num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _write_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
