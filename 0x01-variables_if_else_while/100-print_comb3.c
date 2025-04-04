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
	int b = 0;

	while (a < 9)
	{
		while (b <= 9)
		{
			putchar(a);
			putchar(b);
		}

		if (a < 8 && b <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
		b++;
	}
	putchar('\n');
	return (0);
}
