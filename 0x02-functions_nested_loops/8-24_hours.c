#include "main.h"

/**
 *jack_bauer - prints minutes in a day
 *
 *Return: Always 0(success)
 */

void jack_bauer(void)
{
	int a = 0;

	while (a < 3)
	{
		int b = 0;

		while (b <= 9)
		{
			if (a == 2 && b > 3)
			{
				break;
			}
			else
			{
				int c = 0;

				while (c < 6)
				{
					int d = 0;

					while (d <= 9)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
						d++;
					}
					c++;
				}
				b++;
			}
		}
		a++;
	}
}
