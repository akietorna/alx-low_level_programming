#include <stdio.h>

/**
 *main - entry point into the program
 *Description: listing double digit numbers
 *@void: expect nothing at the end of the code
 *Return: Always 0 (success)
 */

int main(void)
{
	int a = 0;

	while (a < '9')
	{
		int b = '1';

		while (b <= '9')
		{
			if (a != b && a < b)
			{
				putchar(a);
				putchar(b);

				if (a != '8')
				{
					putchar(',');
					putchar(' ');
				}
				b++;
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
