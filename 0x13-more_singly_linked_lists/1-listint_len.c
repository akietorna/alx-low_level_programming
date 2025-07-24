#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - gets the number of nodes in a linked list
 *@h: the linked list head
 *Return: the number of nodes in the linked list
 */

size_t listint_len(const listint_t *h)
{
	int a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
