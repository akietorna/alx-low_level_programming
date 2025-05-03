#include "main.h"
#include <string.h>

/**
 *puts2 - prints even characthers from a string
 *@s: takes in string to be used
 *
 *Return: Always 0
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
