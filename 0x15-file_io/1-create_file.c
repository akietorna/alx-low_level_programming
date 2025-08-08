#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 *create_file - creates a file
 *@filename: the name of the file
 *@text_content: content on the created file
 *Return: -1-failure 1-success
 */

int create_file(const char *filename, char *text_content)
{
	int fdes, bw;

	if (filename == NULL)
	{
		return (-1);
	}
	fdes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fdes == -1)
	{
		return (-1);
	}
	bw = write(fdes, text_content, _strlen(text_content));
	if (bw == -1)
	{
		close(fdes);
		return (-1);
	}
	close(fdes);
	return (1);
}

/**
 *_strlen - get length of a string
 *@str: the string
 *Return: length of the string
 */

int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
