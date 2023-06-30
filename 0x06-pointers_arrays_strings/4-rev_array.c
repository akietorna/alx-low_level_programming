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
	int temp[1000];
	int b = 0;
	int c = 0;
	n--;

	while (b <= n)
	{
		temp[c] = a[n];

		n--;
		c++;
	}

	while(b <= c)
	{
		*(a + b) = temp[b];

		b++;
	}
}
