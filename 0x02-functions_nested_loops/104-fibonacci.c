#include <stdio.h>

/**
 *main - prints first 50 fibonacci numbers
 *Return: Always (0)
 */

int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int sum = 0;
	int n = 0;

	while (n < 98)
	{
		if (n < 97)
		{
			sum = a + b;
			printf("%lu, ", sum);
			a = b;
			b = sum;
		}
		else
		{
			int temp = 0;

			sum = (a + b) / 100;
			temp = (a + b) % 100;
			printf("%lu%d\n", sum, temp);
		}
		n++;
	}
	return (0);
}
