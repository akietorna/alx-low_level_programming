#include <stdio.h>


/**
 *main - sums multiples of 3 or 5
 *Return: Always(0)
 */

int main(void)
{
	int result = 0;
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			result += a;
		}
	}
	printf("%d\n", result);
	return (0);
}
