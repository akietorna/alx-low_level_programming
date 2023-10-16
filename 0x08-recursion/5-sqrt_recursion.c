#include "main.h"

int find_sqrt(int n,int gnum);
/**
 *_sqrt_recursion -finds square root of a number
 *@n: number whose square root is found
 *Return: the squareroot
*/

/**
 *find_sqrt - checks for square root of a number
 *@n: number whose square root is found
 *@gnum: guessed number
 *Return: the squareroot
*/


int find_sqrt(int n,int gnum)
{
	int sqrnum = gnum * gnum;

	if (sqrnum == n)
	{
		return (gnum);
	}
	else if (sqrnum > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, gnum + 1));
	}
}

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
