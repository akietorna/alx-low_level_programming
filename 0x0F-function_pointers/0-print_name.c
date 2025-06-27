#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - prints the name of a person
 *@name: the name of the person
 *@f: the format specifier
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
