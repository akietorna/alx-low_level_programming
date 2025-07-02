#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints numbers
 *@separator: separates the numbers from each other
 *@n: number of integers
 *Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{


	unsigned int a;
	va_list num;

	va_start(num, n);
	for (a = 0; a < n; a++)
	{
		printf("%i", va_arg(num, int));
		if (a < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
