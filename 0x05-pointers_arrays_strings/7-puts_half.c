#include "main.h"
#include <string.h>

/**
 *puts_half - prints second half of a string
 *@str: takes in string to be used
 *
 *Return: Always 0
 */

void puts_half(char *str)
{
	int str_len = strlen(str);
	int a = str_len % 2 == 0 ? str_len / 2 : (str_len + 1) / 2;

	while (a < str_len)
	{
		char j = *(str + a);

		_putchar(j);
		a++;
	}
	_putchar('\n');
}
