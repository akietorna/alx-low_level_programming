#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 *mul - prints all arguments including the name of the programme
 *@name: pointer to the arguments
 *@arg: the number of arguments
 *Return: nothing
 */

int mul(char *name[], int arg)
{
	if (arg == 3)
	{
		printf("%i\n", atoi(name[1]) * atoi(name[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
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
	return (mul(argv, argc));
}
