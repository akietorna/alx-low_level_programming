#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers
 *Return: Always (0)
 */

int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	int n = 0;

	while (n < 50)
	{
		unsigned long int temp;

		temp = a + b;

		if (n == 49)
		{
			printf("%ld\n", temp);
		}
		else
		{
			printf("%ld, ", temp);
		}

		a = b;
		b = temp;
		n++;
	}
	return (0);
}
