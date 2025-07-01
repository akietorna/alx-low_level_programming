#include <stdio.h>
#include <stdlib.h>

/**
 *main - print opcode
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0-succes
 */

int main(int argc, char *argv[])
{
	int a;
	unsigned char *op = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (a = 0; a < atoi(argv[1]); a++)
	{
		printf("%02x ", op[a]);
	}
	printf("\n");
	return (0);
}
