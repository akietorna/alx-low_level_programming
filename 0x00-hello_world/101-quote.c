#include <stdio.h>
/**
 *main - entry point to the program
 *write - helps to output in place of printf
 *Description: Outputing without using the printf
 *Return 1 which output to standard error
 */
int write(int filedes, const char *buf, unsigned int nbyte);
int main()
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
