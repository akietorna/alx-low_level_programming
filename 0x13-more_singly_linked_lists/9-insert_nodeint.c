#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - insert a node at a position in linked list
 *@head: head of the list
 *@idx: positio to insert the node
 *@n: data to insert
 *Return: address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int a;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		*head = new;
		new->n = n;
		new->next = temp;
		return (new);
	}
	for (a = 0; a < (idx - 1); a++)
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	new->n = n;
	return (new);
}
