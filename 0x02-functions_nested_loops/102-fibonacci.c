#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers
 *Return: Always (0)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int n;

	for (n = 0; n < 50; n++)
	{
		int temp;

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
