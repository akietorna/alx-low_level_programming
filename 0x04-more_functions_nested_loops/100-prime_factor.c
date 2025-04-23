#include <stdio.h>

/**
 * main - entry point into the program
 * Descripton: it finds and prints the largest prime factor of a number
 * @void: the function should not expect any input
 * Return: Always 0 sucess
 */

int main(void)
{
	unsigned long int a = 612852475143;
	unsigned long int b = 2;

	while (b * b <= a)
	{
		if (a % b == 0)
		{
			a = a / b;
		}
		else
		{
			b++;
		}
	}
	printf("%lu\n", a);
	return (0);
}
