#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers
 *Return: Always (0)
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int n;

	for (n = 0; n < 50; n++)
	{
		double temp;

		temp = a + b;
		a = b;
		b = temp;

		if (n == 49)
		{
			printf("%d", temp);
		}
		else
		{
			printf("%d, ", temp);
		}
	}
	return (0);
}
