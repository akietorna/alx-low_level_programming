#include <stdlib.h>
#include "main.h"

int str_count(char *str);

/**
 *str_count - gives the lenght of a string
 *@str: the string
 *Return: the length of the string
 */

int str_count(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}


/**
 *_strdup - duplicates a string
 *@str: the string to duplicate
 *Return: the pointer to the duplicated string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int a = str_count(str);
		char *dup_str = (char *)malloc(a * sizeof(char));

		if (dup_str == NULL)
		{
			return (NULL);
		}
		else
		{
			int n = 0;

			while (n < a)
			{
				dup_str[n] = str[n];
				n++;
			}
			return (dup_str);
		}
	}
}
