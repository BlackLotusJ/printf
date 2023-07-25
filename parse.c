#include "holberton.h"

/**
 * parser - Receives the main string and all the necessary parameters to
 * print a formated string.
 * @format: A string containing all the desired characters.
 * @f_list: A list of all the posible functions.
 * @arg_list: A list containing all the argumentents passed to the program.
 * Return: A total count of the characters printed.
 */
int parser(const char *form, conver_t f_list[], va_list arg_list)
{
	int i, j, r_val, chars_printed;

	chars_printed= 0;
	for (i = 0; form[i] != '\0'; i++)/* Iterates through the main str*/
	{
		if (form[i] == '%') /*Checks for format specifiers*/
		{
			/*Iterates through struct to find the right func*/
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (form[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					chars_printed += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && form[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write(form[i]);
					_write(form[i + 1]);
					chars_printed = chars_printed + 2;
				}
				else
					return (-1);
			}
			i = i + 1; /*Updating i to skip format symbols*/
		}
		else
		{
			_write(form[i]); /*call the write function*/
			chars_printed++;
		}
	}
	return (chars_printed);
}
