#include "main.h"
/**
 * write_base - sends chars to be rinted to stdout
 * @str: string to be parsed
 */
void write_base(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		_write(str[i]);
	}
}

/**
 * base_len - determines the length
 * @num: number 
 * @base:base to determined
 */
unsigned int base_len(unsigned int num, int base)
{
	for (unsigned int i = 0; i < num; i++)
		num = num / base;
	return (i);
}

/**
 * reverse_string - reverses a sring
 * @s: string to be reversed
 * Return: pointer to a char
 */
int reverse_string(char *s)
{
	int len, head;
	char tmp, *dest;

	for (len = 0; s[len] != '\0'; len++)
	{}

	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	_memcpy(dest, s, len);
	for (head = 0; head < len; head++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[head];
		dest[head] = tmp;
	}
	return (dest);
}
/**
 * _memcpy - copies a mem area
 * @dest: destnation
 * @src: source to copy from
 * @n: number of bytes to copy
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *original_dest = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (original_dest);
}
