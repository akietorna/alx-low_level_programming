#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *is_a_number - checks if the string is entirely an integer
 *@str: placeholder of the string to recieve
 *Return: 0 -success or 1-error
 */

int is_a_number(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			return (1);
		}
		else if (str[a] >= 'a' && str[a] <= 'z')
		{
			return (1);
		}
		a++;
	}
	return (0);
}

/**
 *add - add all integer arguments
 *@name: pointer to the arguments
 *@arg: the number of arguments
 *Return: nothing
 */

int add(char *name[], int arg)
{
	int sum = 0;
	int n = 1;
	int status = 0;

	if (arg == 1)
	{
		printf("0\n");
	}
	else
	{
		while (n < arg)
		{
			status = is_a_number(name[n]);
			if (atoi(name[n]) > 0 && status == 0)
			{
				sum += atoi(name[n]);
				n++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%i\n", sum);
	}
	return (0);
}


/**
 *main - enry point into the programme
 **@argc: placeholder of number of argument
 *@argv: placeholder of the arguments
 *
 *Return: 0, success
 */

int main(int argc, char *argv[])
{
	return (add(argv, argc));
}
