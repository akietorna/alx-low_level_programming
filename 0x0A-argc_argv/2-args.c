#include <stdio.h>
#include "main.h"


/**
 *args2 - prints all arguments including the name of the programme
 *@name: pointer to the arguments
 *@arg: the number of arguments
 *Return: nothing
 */

void args2(char *name[], int arg)
{
	int n = 0;

	while (n < arg)
	{
		printf("%s\n", name[n]);
		n++;
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
	args2(argv, argc);
	return (0);
}
