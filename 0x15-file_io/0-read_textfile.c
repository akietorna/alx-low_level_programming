#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


/**
 *read_textfile - reads and prints text files
 *@filename: pointer to the file
 *@letters: number of bytes to copy
 *Return: Number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	ssize_t bw, br;
	char *buff = malloc(letters * sizeof(char));

	if (buff == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
	{
		free(buff);
		return (0);
	}
	br = read(fdes, buff, letters);
	if (br == -1)
	{
		free(buff);
		close(fdes);
		return (0);
	}
	bw = write(STDOUT_FILENO, buff, br);
	if (bw == -1 || bw != br)
	{
		free(buff);
		close(fdes);
		return (0);
	}
	free(buff);
	close(fdes);
	return (bw);
}
