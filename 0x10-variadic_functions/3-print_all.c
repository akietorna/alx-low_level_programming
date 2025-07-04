#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 *print_int - prints integer arguments
 *@myargs: the arguments
 *Return: Nothing
 */

void print_int(va_list myargs)
{
	printf("%i", va_arg(myargs, int));
}

/**
 *print_char - prints character arguments
 *@myargs: the arguments
 *Return: Nothing
 */

void print_char(va_list myargs)
{
	printf("%c", va_arg(myargs, int));
}

/**
 *print_float - prints float arguments
 *@myargs: the arguments
 *Return: Nothing
 */

void print_float(va_list myargs)
{
	printf("%f", va_arg(myargs, double));
}

/**
 *print_str - prints string arguments
 *@myargs: the arguments
 *Return: Nothing
 */

void print_str(va_list myargs)
{
	char *str = va_arg(myargs, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 *print_all - print all argument
 *@format: the types of the arguments
 *Return: Nothing
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	va_list myargs;
	print_ent myfuncs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str}
	};
	char *sep = "";

	va_start(myargs, format);
	while (format != NULL && format[a] != '\0')
	{
		int b = 0;

		while (b < 4)
		{
			if (format[a] == myfuncs[b].args)
			{
				printf("%s", sep);
				myfuncs[b].print_func(myargs);
				sep = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	printf("\n");
	va_end(myargs);
}
