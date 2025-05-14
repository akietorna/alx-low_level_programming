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

	while (b < n--)
	{
		int temp;

		temp = a[b];
		a[b] = a[n];
		a[n] = temp;
		b++;
	}
}
