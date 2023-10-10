#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 *main - entry point into the program
 *Description: checks if a number is positive, negative or neutral
 *@void: expect no return value at the end of the program
 *Return: Always 0 (success)
 */

void positive_or_negative(int n)
{
  /*srand(time(0));
    n = rand() - RAND_MAX / 2;*/

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
