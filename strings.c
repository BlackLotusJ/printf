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
	ptr = reverse_string(str);
	if (ptr == NULL)
		return (=1);
	for (len = 0; ptr[len] != '\0'; len++)
		_write(ptr[len]);
	free(ptr);
	return (len);
}

/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
int rot13(va_list list)
{
	int i;
	int x;
	char *str;
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (str[i] == s[x])
			{
				_write(u[x]);
				break;
			}
		}
		if (x == 53)
			_write(str[i]);
	}
	return (i);
}
