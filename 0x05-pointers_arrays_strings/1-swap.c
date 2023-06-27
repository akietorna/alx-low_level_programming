#include "main.h"

/**
 *swap_int - swaps values of two integers
 *@a: parameter of the first int to be swapped
 *@b: parameter of the second integer to be swapped
 *
 *Return: Always 0(success)
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
