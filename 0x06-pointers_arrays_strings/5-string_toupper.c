#include "main.h"

/**
 * string_toupper - converts a string to upper case
 * @str: string to be converted
 *
 * Return: the converted string
 */

char *string_toupper(char *str)
{
	int indx = 0;

	while (str[indx])
	{
		if (str[indx] >= 'a' && str[indx] <= 'z')
		{
			str[indx] = str[indx] - 32;
		}
		indx++;
	}
	return (str);
}
