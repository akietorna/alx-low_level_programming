#include <stdlib.h>
#include "main.h"

int str_len(char *str, int a);
int cnt_word(char *str);

/**
 *cnt_word - counts the number of words in a string
 *@str: the string
 *Return: the number of words
 */

int cnt_word(char *str)
{
	int a = 0;
	int num = 0;

	while (str[a] != '\0')
	{
		if (str[a] != ' ')
		{
			if ((str[a + 1] == ' ') || (str[a + 1] == '\0'))
			{
				num++;
			}
		}
		a++;
	}
	return (num);
}

/**
 *str_len - counts the number of characthers in a word
 *@str: the word
 *@a: current position in the string
 *Return: the number of character
 */

int str_len(char *str, int a)
{
	int b = 0;

	while (str[a] != ' ' && str[a] != '\0')
	{
		a++;
		b++;
	}
	return (b);
}

/**
 *strtow - splits a string into words
 *@str: the string
 *Return: Pointer to the array of strings
 */

char **strtow(char *str)
{
	int num;
	char **spt_word;

	if (str == NULL || *str == '\0' || *str == " ")
	{
		return (NULL);
	}
	num = cnt_word(str);
	spt_word = (char **)malloc((num + 1) * sizeof(char *));
	if (spt_word == NULL)
	{
		return (NULL);
	}
	else
	{
		int a = 0;
		int b;

		for (b = 0; b < num; b++)
		{
			int d, len;

			while (str[a] == ' ')
			{
				a++;
			}
			len = str_len(str, a);
			spt_word[b] = (char *)malloc((len + 1) * sizeof(char));
			if (spt_word[b] == NULL)
			{
				int c;

				for (c = 0; c < b; c++)
				{
					free(spt_word[c]);
				}
				free(spt_word);
				return (NULL);
			}
			for (d = 0; d < len; d++)
			{
				spt_word[b][d] = str[a + d];
			}
			spt_word[b][d] = '\0';
			a += len;
		}
		spt_word[num] = NULL;
		return (spt_word);
	}
}
