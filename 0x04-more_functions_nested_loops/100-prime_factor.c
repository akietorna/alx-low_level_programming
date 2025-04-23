#include <stdio.h>

/**
 *main - entry point into the program
 *Descripton: it finds and prints the largest prime factor of a number
 *Return - Always 0 sucess
 */

int main()
{
	unsigned long int a = 612852475143;
	unsigned long int b = 0;
	unsigned long int d = 0;
	unsigned long int c = 0;
	int e = 0;

	for (b = 1; b <= a; b++)
	{
		if (a % b == 0)
		{
			for (d = 2; d <= (b / 2); d++)
			{
				if (b % d == 0)
				{
					e++;
				}
			}
			if (e == 0)
			{
				c = b;
			}
		}
	}
	printf("%lud", c);
	return (0);
}
