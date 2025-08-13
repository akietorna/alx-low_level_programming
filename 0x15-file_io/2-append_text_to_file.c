#include <unistd.h>
#include "main.h"
#include <stdlib.h>
#include <fcntl.h>

/**
 *append_text_to_file - append a text to the tail of snother text
 *@filename:  the filename
 *@text_content: text to append
 *Return: -1-failure 1-success
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, bw;
	int a = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fdes = open(filename, O_WRONLY | O_APPEND);
	if (fdes == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fdes);
		return (1);
	}
	while (text_content[a] != '\0')
	{
		a++;
	}
	bw = write(fdes, text_content, a);
	if (bw == -1)
	{
		close(fdes);
		return (-1);
	}
	close(fdes);
	return (1);
}
