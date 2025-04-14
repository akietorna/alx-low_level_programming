#include "main.h"

/**
 *times_table - prints 9 times tables from 0
 *@void: no input
 */

void times_table(void)
{
	int res = 0;
	int a  = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 9)
		{
			res = a * b;

			if (b == 0)
			{
				_putchar('0');
			}
			else if (res <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + res);
			}
			else if (res > 9)
			{
				_putchar(' ');
				_putchar('0' + (res / 10));
				_putchar('0' + (res % 10));
			}

			if (b != 9)
			{
				_putchar(',');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
