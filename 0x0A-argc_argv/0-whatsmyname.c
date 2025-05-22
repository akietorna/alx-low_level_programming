#include <stdio.h>
#include "main.h"

void whatsmyname(char *name);

/**
 *whatsmyname - prints the name of the programme
 *@name: the name of the programme
 *Return: nothing
 */

void whatsmyname(char *name)
{
	printf("%s\n", name);
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
	(void)argc;
	
	whatsmyname(argv[0]);
	return (0);
}
