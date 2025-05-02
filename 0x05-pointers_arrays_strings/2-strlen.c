#include "main.h"

/**
 *_strlen - prints the length of a string
 *strlen - gives length of a string
 *@s: takes in a string
 *
 *Return: Always 0
 */


int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
