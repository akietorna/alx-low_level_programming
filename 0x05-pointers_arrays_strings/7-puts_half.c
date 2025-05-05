#include "main.h"

/**
 *puts_half - prints second half of a string
 *@str: takes in string to be used
 *
 *Return: Always 0
 */

void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 != 0)
	{
		int n = (len - 1) / 2;

		while (n <= len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		int n = len / 2;

		while (n <= len)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
