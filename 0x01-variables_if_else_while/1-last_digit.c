#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *main - entry piont into the program
 *Description: checks if a number is positive, negative or neutral
 *@void: expect no return value at the end of the program
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);
}
