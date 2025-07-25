#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - pops the head node of a linked list
 *@head: the head of the list
 *Return: the head node data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
