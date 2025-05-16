#include "main.h"

/**
 *print_number - prints an integer
 *@n: the number to be printed
 *
 *Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
		print_number(n);
	}
	else
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}
		_putchar((n % 10) + '0');
	}
}
