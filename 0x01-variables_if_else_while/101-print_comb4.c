#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing double digit numbers
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		int b = '1';

		while (b <= '9')
		{
			int c = '2';

			while (c <= '9')
			{
				if (a != b && a != c && b != c && a < b && b < c && a < '8' && b < '9')
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}

				num3++;
			}

			num2++;
		}

		num++;
	}

	putchar('\n');

	return (0);
}
