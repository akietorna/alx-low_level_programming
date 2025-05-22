#include <stdio.h>
#include "main.h"

void args(int arg);

/**
 *args - prints the number of command line argument
 *@arg: the name of the programme
 *Return: nothing
 */

void args(int arg)
{
	printf("%d\n", arg);
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
	(void)argv;

	args(argc - 1);
	return (0);
}
