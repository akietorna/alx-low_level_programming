#include <stdio.h>
#include <unistd.h>

/**
 *main - entry point to the program
 *@void: returns nothing after compilling
 *Description: Outputing without using the printf
 *Return: 1 which output to standard error
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
