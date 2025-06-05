#include <stdio.h>
#include "main.h"

/**
 *args - prints the number of command line argument
 *@argc: the name of the programme
 *Return: nothing
 */

void args(int argc)
{
	printf("%i\n", (argc - 1));
}

/**
 *main - enry point into the programme
 *@argc: placeholder of number of argument
 *@argv: placeholder of the arguments
 *
 *Return: 0, success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	args(argc);
	return (0);
}
