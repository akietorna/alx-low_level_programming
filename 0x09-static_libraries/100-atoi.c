#include "main.h"

/**
 *_atoi - converts a string to integer
 *@s: takes in the string
 *
 *Return: the number
 */

int _atoi(char *s)
{
	int a = 0;
	int sign  = 1;
	unsigned int value = 0;
	int start = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-' && !start)
		{
			sign = sign * -1;
		}
		else if (s[a] >= '0' && s[a] <= '9')
		{
			start = 1;
			value = (value * 10) + (s[a] - '0');
		}
		else if (start)
		{
			break;
		}
		a++;
	}
	return (value * sign);
}
