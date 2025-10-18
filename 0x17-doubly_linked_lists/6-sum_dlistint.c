#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - sums up all integers at the various nodes
 *@head: head node
 *Return: The sum of all the integers
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int a = 0;

	while (temp  != NULL)
	{
		a += temp->n;
		temp = temp->next;
	}
	return (a);
}
