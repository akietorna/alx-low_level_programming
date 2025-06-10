#include <stdlib.h>
#include "main.h"

void str_cop(char  *str1, char *str2, int a);
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
 *str_cop - Copy a string
 *@str1: the string to copy
 *@str2: the reciepient location
 *@a: string length
 *Return: nothing
 */

void str_cop(char  *str1, char *str2, int a)
{
	int i = 0;

	while (i < a)
	{
		str2[i] = str1[i];
		i++;
	}
}


/**
 *str_concat - concatenate two strings
 *@s1: first string
 *@s2: second string
 *Return: the pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL && s2 == NULL)
	{
		char *str_con = (char *)malloc(1 * sizeof(char));

		if (str_con != NULL)
		{
			str_con[0] = '\0';
			return (str_con);
		}
		else
		{
			return (NULL);
		}
	}
	else if (s1 == NULL)
	{
		int a = str_count(s2);
		char *str_con = (char *)malloc((a + 1) * sizeof(char));

		if (str_con != NULL)
		{
			str_cop(s2, str_con, a);
			str_con[a + 1] = '\0';
			return (str_con);
		}
		else
		{
			return (NULL);
		}
	}
	else if (s2 == NULL)
        {
		int a = str_count(s1);
                char *str_con = (char *)malloc((a + 1) * sizeof(char));

                if (str_con != NULL)
                {
                        str_cop(s1, str_con, a);
			str_con[a + 1] = '\0';
			return (str_con);
                }
                else
                {
                        return (NULL);
                }
        }
	else
	{
		int a = str_count(s1);
		int b = str_count(s2);
		char *str_con = (char *)malloc((a + b + 1) * sizeof(char));

		if (str_con != NULL)
		{
			int i = 0;

			str_cop(s1, str_con, a);
			while (i < b)
			{
				str_con[a + i] = s2[i];
				i++;
			}
			str_con[a + b] = '\0';
			return (str_con);
		}
		else
		{
			return (NULL);
		}
	}
}
