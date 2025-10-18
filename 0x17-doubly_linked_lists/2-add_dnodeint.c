#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - adds a node to the beginning of a linked list
 *@head: head of the linked list
 *@n: the integer of the node
 *Return: pointer to the node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->next = *head;
	temp->n = n;
	temp->prev = NULL;
	*head = temp;
	if (temp->next != NULL)
	{
		temp->next->prev = *head;
	}
	return (*head);
}
