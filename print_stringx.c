#include "main.h"

/**
 * print_String - print exclusive string.
 * @l: argument list.
 * Return: the length of the string.
 */
int print_String(va_list l)
{
	int len = 0;
	char *res, *s = va_arg(l, char *);

	if (!s)
		return (_puts(NULL_STRING));

	for (; *s; s++)
	{
		if (isNonAlphaNumeric(*s))
		{
			len += _puts("\\x");
			res = convert((unsigned long)(*s), 16, 0);

			if (!res[1])
				len += _putchar('0');
			len += _puts(res);
		}
		else
			len += _putchar(*s);
	}
	return (len);
}

/**
 * isNonAlphaNumeric - determines if char is a non-alphanumeric char on ASCII table
 * @c: input char
 * Return: true or false
 */
int isNonAlphaNumeric(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * convert - converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexa values need to be lowercase
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char buffer[50];
	char *ptr;
	char *rep = (lowercase)
				? "0123456789abcdef"
				: "0123456789ABCDEF";

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num);

	return ptr;
}

