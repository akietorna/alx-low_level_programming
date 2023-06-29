#include "main.h"
#include <string.h>

/**
 *puts2 - prints even characthers from a string
 *@s: takes in string to be used
 *
 *Return: Always 0
 */

void puts2(char *s)
{
	int str_len = strlen(s);
	int a = 0;

	while (a < str_len)
	{
		if (a % 2 == 0)
		{
			char j = *(s + a);

			_putchar(j);
		}
		a++;
	}
	_putchar('\n');
}
