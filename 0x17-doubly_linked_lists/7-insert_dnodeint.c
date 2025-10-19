#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - insert a node at an index
 *@h: head node
 *@idx: index to insert at
 *@n: integer to insert
 *Return: address of inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *temp2;
	unsigned int a = 0;

	if (idx == 0)
	{
		temp = malloc(sizeof(dlistint_t));
		if (temp == NULL)
		{
			return (NULL);
		}
		temp->prev = NULL;
		temp->next = *h;
		temp->n = n;
		*h = temp;
		if (temp->next != NULL)
		{
			temp->next->prev = temp;
		}
		return (temp);
	}
	temp = *h;
	while (temp != NULL && a < idx)
	{
		if (a == idx - 1)
		{
			temp2 = malloc(sizeof(dlistint_t));
			if (temp2 == NULL)
			{
				return (NULL);
			}
			temp2->next = temp->next;
			temp2->prev = temp;
			temp2->n = n;
			temp->next = temp2;
			if (temp2->next != NULL)
			{
				temp2->next->prev = temp2;
		       	}
			return (temp2);
		}
		a++;
		temp = temp->next;
	}
	return (NULL);
}
