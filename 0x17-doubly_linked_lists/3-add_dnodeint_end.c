#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - add a node at the end of a linked list
 *@head: the head of the node
 *@n: integer value of the node
 *Return: address of the nwe node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;

	if (temp == NULL)
	{
		*head = malloc(sizeof(dlistint_t));
		if (*head == NULL)
		{
			return (NULL);
		}
		(*head)->next = NULL;
		(*head)->prev = NULL;
		(*head)->n = n;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = malloc(sizeof(dlistint_t));
	if (temp->next == NULL)
	{
		return (NULL);
	}
	temp->next->next = NULL;
	temp->next->prev = temp;
	temp->next->n = n;
	return (temp->next);
}

