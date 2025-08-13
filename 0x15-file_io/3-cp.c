#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>


/**
 *main - copies content of a file to another
 *@argv: argument vector
 *@argc: argument counter
 *Return: 0- Always true
 */

int main(int argc, char *argv[])
{
	char buff[1024];
	int fdes1, fdes2, br;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdes1 = open(argv[1], O_RDONLY);
	if (fdes1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n",
			argv[1]);
		exit(98);
	}
	fdes2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdes2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n",
			argv[2]);
		exit(99);
	}
	while ((br = read(fdes1, buff, 1024)) > 0)
	{
		if (write(fdes2, buff, br) != br)
		{
			dprintf(STDERR_FILENO, "Error: Can\'t write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (br == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t read from file %s\n",
			argv[1]);
		exit(98);
	}
	check_file(fdes1, fdes2);
	return (0);
}


/**
 *check_file - checks for succesfull closing of files
 *@fdes1: first file
 *@fdes2: second file
 */

void check_file(int fdes1, int fdes2)
{
	if (close(fdes1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %i\n", fdes1);
		exit(100);
	}
	if (close(fdes2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can\'t close fd %i\n", fdes2);
		exit(100);
	}
}
