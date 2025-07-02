#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings
 *@separator: separates the strings from each other
 *@n: number of strings
 *Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{


	unsigned int a;
	va_list mystr;

	va_start(mystr, n);
	for (a = 0; a < n; a++)
	{
		char *str = va_arg(mystr, char *);
		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (a < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mystr);
}
