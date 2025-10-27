#include <stdio.h>

int palindrome(int a);
/**
 *palindrome - checks if an integer is a palindrome
 *@a: the integer
 *Return: True or False
 */

int palindrome(int a)
{
	int b = a;
	int reverse = 0;

	while (a != 0)
	{
		reverse = reverse * 10 + a % 10;
		a = a / 10;
	}
	return (b == reverse);
}

/**
 *main - Find the highest product of 3 digit numbers that is palindrome
 *Return: Always 0
 */

int main(void)
{
	int a, b;
	int max = 0;

	for (a = 999; a >= 100; a--)
	{
		for (b = 999; b >= 100; b--)
		{
			if (max > a * b)
			{
				break;
			}
			if (palindrome(a * b) && max < a * b)
			{
				max = a * b;
			}
		}
	}
	printf("%d", max);
	return (0);
}
