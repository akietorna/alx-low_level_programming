#include "main.h"

/**
 *jack_bauer - prints minutes in a day
 *@void : no input
 */

void jack_bauer(void)
{
	int a = 0;

	while (a <= 2)
	{
		int b = 0;

		while (b <= 3)
		{
			int c = 0;

			while (c <= 5)
			{
				int d = 0;

				while (d <= 9)
				{
					_putchar('0' + a);
					_putchar('0' + b);
					_putchar(':');
					_putchar('0' + c);
					_putchar('0' + d);
					_putchar('\n');
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
