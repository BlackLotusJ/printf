#include "main.h"
/**
 * _write - writes the character
 * @c: character to be printed
 * Return: 1 success
 */
int _write(char c)
{
	return (write(1, &c, 1));
}
