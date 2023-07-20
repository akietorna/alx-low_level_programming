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
		unsigned int temp;

		temp = a + b;
		a = b;
		b = temp;

		if (n == 49)
		{
			printf("%u", temp);
		}
		else
		{
			printf("%u, ", temp);
		}
	}
	return (0);
}
