#include "main.h"

/**
 *reverse_array - reverses an array of integers
 *@a: pointer to the array
 *@n: numbers of element in the array
 *
 *Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int b = 0;

	while (b < n)
	{
		int c = 0;

		while (c < (n - 1))
		{
			if (a[c] < a[c + 1])
			{
				int temp = a[c];
				*(a + c) = a[c + 1];\
				*(a + (c + 1)) = temp;
			}
			c++;
		}
		b++;
	}
}
