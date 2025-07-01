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
	int size;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (a = 0; a < size; a++)
	{
		printf("%02x", op[a]);
		if (a < size - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
