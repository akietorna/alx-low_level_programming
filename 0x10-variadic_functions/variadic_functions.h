#include <stdarg.h>
#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H


/**
 *struct print_ent - print different types of argument
 *@args: the argument
 *@print_func:  type of function to pick
 */

typedef struct print_ent
{
        char args;
        void (*print_func)(va_list myargs);
} print_ent;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list myargs);
void print_char(va_list myargs);
void print_str(va_list myargs);
void print_float(va_list myargs);


#endif
