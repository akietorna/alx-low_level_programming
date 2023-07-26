#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_atoi - converts a string to integer
 *@s: takes in the string
 *
 *Return: the number
 */

int _atoi(char *s)
{
	int a = 0, b = 0;
	int num;
	int str_len = strlen(s); 

	while (a < str_len)
	{
		if (s[a] != ' ')
		{
			*(s + a] = *(s + a);
			b++;
		}
		a++;
	}
	*(s + b) = ' ';
	
	num = atoi(s);

	return (num);
}
