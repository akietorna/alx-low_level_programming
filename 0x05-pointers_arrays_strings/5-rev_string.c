#include "main.h"
#include <string.h>

/**
 *rev_string - print a string in the reverse order
 *@s: takes in string to be converted
 *
 *Return: Always 0
 */

void rev_string(char *s)
{
	int str_len = strlen(s);
	int a = str_len - 1;
	int b = 0;
	char temp[2000];

	strcpy(temp, s);
	while (a >= 0)
	{
		*(s + b) = temp[a];
		a--;
		b++;
	}
}
