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

	temp = *head;
	*head = malloc(sizeof(dlistint_t));
	if (*head == NULL)
	{
		free(*head);
		return (NULL);
	}
	(*head)->next = temp;
	(*head)->n = n;
	if (temp != NULL)
	{
		temp->prev = *head;
	}
	return (*head);
}
