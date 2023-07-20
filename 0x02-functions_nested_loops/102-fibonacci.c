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
		unsigned long int temp;

		temp = a + b;

		if (n == 49)
		{
			printf("%lu", temp);
		}
		else
		{
			printf("%lu, ", temp);
		}

		a = b;
		b = temp;
	}
	printf("\n");
	return (0);
}
