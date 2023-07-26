#include "main.h"
/**
 * print_integer - prints intiger number
 * @args: number arguements
 * @chars_printed: printed characters
 * Return: printed charcaters
 */
int print_integer(va_list args, int chars_printed)
{
	int num = va_arg(args, int);
	int digits = 0;
	int temp = num;
	int digit;

	if (num < 0)
	{
		chars_printed += _putchar('-');
		num = -num;

		temp = num;
	}
	do {
		digits++;
		temp /= 10;
	} while (temp != 0);
	while (digits > 0)
	{
		int i, pow10 = 1;

		for (i = 1; i < digits; i++)
		{
			pow10 *= 10;
		}
		digit = num / pow10;
		chars_printed += _putchar(digit + '0');
		num -= digit * pow10;
		digits--;
	}
	return (chars_printed);
}
