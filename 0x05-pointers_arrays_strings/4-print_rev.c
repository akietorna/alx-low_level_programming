#include "main.h"

/**
 *print_rev - print a string in the reverse order
 *@s: takes in string to be converted
 *
 *Return: Always 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
        {
                len++;
        }
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
