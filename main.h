#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <stdbool.h>

/*Main Functions*/
int _printf(const char *format, ...);
int _write(char c);
int print_string(va_list list);
int print_char(va_list list);
int unsigned_int(va_list list);
int print_int(va_list list);
int parse(const char *form, conver_t f_list[], va_list arg_list);

/*Helper Functions*/

#endif /* _MAIN_H */
