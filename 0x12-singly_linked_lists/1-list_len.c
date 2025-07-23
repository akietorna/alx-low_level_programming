#include "lists.h"
#include <stdlib.h>

/**
 *list_len - gets the length of a linked list
 *@h: pointer to the list
 *Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	int a = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
