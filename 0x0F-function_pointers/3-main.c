#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 *main - main entry into functions
 *@argc: number of argument
 *@argv: the arguments
 *Return: 0-success
 */

int main(int argc, char *argv[])
{
	int res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[2]) != '+' && *(argv[2]) != '-' && *(argv[2]) != '*'
	    && *(argv[2]) != '/' && *(argv[2]) != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[3] != NULL)
	{
		res = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
		printf("%i\n", res);
	}
	return (0);
}
