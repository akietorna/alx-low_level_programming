#include "main.h"

/**
 *print_times_table - prints the n times table
 *@n: takes n whose time table is to be printed
 */

void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int char1, char2, char3, a, b;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				int res = a * b;

				if (b != 0)
				{
					if (res <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else if (res > 9 && res < 100)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						_putchar(' ');
					}
				}
				if (res > 99)
				{
					char1 = (res / 100) % 10;
					char2 = (res /10) % 10;
					char3 = res % 10;

					_putchar(char1 + '0');
					_putchar(char2 + '0');
					_putchar(char3 + '0');
				}
				else if (res > 9 && res < 100)
				{
					char1 = (res/10) % 10;
					char2 = res % 10;

					_putchar(char1 + '0');
					_putchar(char2 + '0');
				}
				else if (res <= 9)
				{
					_putchar(res + '0');
				}
				if (b != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
}

