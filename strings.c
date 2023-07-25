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
char *rot13(va_list list)
{
	int i, j;
	char *str;

	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(list, char *);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
