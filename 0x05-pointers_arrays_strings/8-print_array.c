#include "main.h"
#include <stdio.h>

/**
 *print_array - prints integer elements in an array
 *@a: takes the integer array
 *@n: takes the number of elements to be printed
 *
 *Return: Always 0
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		if (b == (n - 1))
		{
			printf("%d", *(a + b));
		}
		else
		{
			printf("%d, ", *(a + b));
		}
		b++;
	}
	printf("\n");
}
