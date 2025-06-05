#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *change - tells the number of coins to get
 *@money: the provided money
 *Return: Always 0 success
 */

int change(int money)
{
	int coins = 0;

	while (money > 0)
	{
		if (money - 25 >= 0)
		{
			money -= 25;
			coins++;
		}
		else if (money - 10 >= 0)
		{
			money -= 10;
			coins++;
		}
		else if (money - 5 >= 0)
		{
			money -= 5;
			coins++;
		}
		else if (money - 2 >= 0)
		{
			money -= 2;
			coins++;
		}
		else
		{
			money -= 1;
			coins++;
		}
	}
	printf("%i\n", coins);
	return (0);
}

/**
 *main - entry into the programme
 *@argv: argument vector
 *@argc: argument counter
 *Return: 0-success, 1-error
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (atoi(argv[1]) > 0)
		{
			return (change(atoi(argv[1])));
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
