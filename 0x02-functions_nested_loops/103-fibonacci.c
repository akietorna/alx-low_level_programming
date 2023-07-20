#include <stdio.h>

/**
 *main - prints the sum of even-valued terms in the fibonacci sequence
 *Return: Always(0)
 */

int main(void)
{
	unsigned long int result = 0;
	int term = 0;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int temp = 0;

	while (temp < 4000000)
	{
		temp = a + b;
		a = b;
		b = temp;

		if (temp % 2 == 0)
		{
			result += temp;
		}
		term++;
	}
	printf("%lu\n",result);
	return (0);
}
