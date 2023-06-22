#include "main.h"

/**
 *_isalpha - checks if character is an alphabet
 *isalpha - checks if character is an alphabet and return 1 or 0
 *@c : input character
 *Return: 1 if true and 0 if false
 */
int isalpha(int c);

int _isalpha(int c)
{
	return (isalpha(c) ? 1 : 0);
}
