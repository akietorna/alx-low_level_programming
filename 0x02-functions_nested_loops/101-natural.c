#include <stdio.h>


/**
 *natural - sums multiples of 3 or 5
 *@n: takes the input
 *Return: Always(0)
 */

int main(void)
{
	int n = 1024;
	int result = 0;
	int a;
	
	for (a = 0; a < n; a++)
	{
		if (a % 3 == 0 || a% 5 == 0)
		{
			result += a;
		}
	}
	printf("%d\n", result);
	return (0);
}
