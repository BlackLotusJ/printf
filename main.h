#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct conv - structure for symbols and functions
 * @sym: operator
 * @f: Associated function
 */
struct conv
{
	char *sym;
	int (*f)(va_list);
};
typedef struct conv conver_t;

/*Main Functions*/
int parse(const char *format, va_list args, int chars_printed);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args, int chars_printed);
int print_char(va_list args, int chars_printed);
int print_integer(va_list args, int chars_printed);
int print_binary(unsigned int num. int chars_printed);
int print_octal(unsigned int num, int chars_printed);
int print_hex(va_list list);
int print_heX(va_list list);
int print_reversed(va_list arg);
int print_num(va_list);
int rot13(va_list);

/*Helper Functions*/
int reverse_string(char *);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *src, char *dest, unsigned int n);
int print_unsgined_num(unsigned int);

#endif /* _MAIN_H */
