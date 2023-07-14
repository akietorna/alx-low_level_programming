#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - prints numbers up to 98
 *@n: takes the starting number
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n == 98)
			{
				printf("%d", n);
			}
			else
			{
				printf("%d, ", n);
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}