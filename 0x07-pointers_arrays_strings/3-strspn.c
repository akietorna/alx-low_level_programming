#include "main.h"

/**
 *_strspn - checks the number of bytes in the initial segment of a string
 *@s: the segment string placeholder
 *@accept: the string to compare the segment with
 *Return: the number of bytes obtained
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	unsigned int count = 0;

	while (s[a] != '\0')
	{
		unsigned int b = 0;
		int status = 0;

		while ((accept[b] != '\0') && (status == 0))
		{
			if (s[a] == accept[b])
			{
				count++;
				status = 1;
			}
			b++;
		}
		if (status == 0)
		{
			break;
		}
		a++;
	}
	return (count);
}
