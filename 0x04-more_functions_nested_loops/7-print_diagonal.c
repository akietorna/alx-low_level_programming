#include "main.h"

/**
 * print_diagonal - prints a diagonal from backslash
 * @n: the number of backslash to use
 */

void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			int b;

			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
