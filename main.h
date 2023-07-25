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
int _printf(const char *format, ...);
int _write(char c);
int print_string(va_list list);
int print_char(va_list list);
int unsigned_int(va_list list);
int print_int(va_list list);
int parse(const char *form, conver_t f_list[], va_list arg_list);
int print_unsigned_num(unsigned int n);
int print_num(va_list args);
int rot13(va_list list);

/*Helper Functions*/
int reverse_string(char *s);
void write_base(char *str);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *src, char *dest, unsigned int n);

#endif /* _MAIN_H */
