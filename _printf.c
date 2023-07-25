#include "main.h"
/**
 * _printf - custom printf function
 * @form: A string containing all the desired characters
 * Return: Countof characters printed
 */
int _printf(const char *form, ...)
{
	va_list args;
	va_start(args,form);

	while (*form != '\0')
	{
		if (*form == '%')
		{
			form++;
			switch (*form)
			{
				case 'c':
					{
						char c = va_ar



