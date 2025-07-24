#include "lists.h"
#include <stdio.h>

/**
 *before_main_print - prints before the main function
 *
 *Return: Nothing
 */

__attribute__((constructor))
void before_main_print(void)
{
	char *str1 = "You're beat! and yet, you must allow,\n";
	char *str2 = "I bore my house upon my back!\n";

	printf("%s%s", str1, str2);
}
