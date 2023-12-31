#include "main.h"
#include <string.h>

/**
 *print_rev - print a string in the reverse order
 *@s: takes in string to be converted
 *
 *Return: Always 0
 */

void print_rev(char *s)
{
	int str_len = strlen(s);
	int a = str_len - 1;

	while (a >= 0)
	{
		char j = *(s + a);

		_putchar(j);
		a--;
	}
	_putchar('\n');
}
