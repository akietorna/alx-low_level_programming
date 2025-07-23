#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - adds a node to a linked list
 *@head: head node
 *@str: string to be copied
 *Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = *head;

	*head = malloc(sizeof(list_t));
	if (*head == NULL)
	{
		return (NULL);
	}
	(*head)->str = strdup(str);
	if ((*head)->str == NULL)
	{
		free(*head);
		*head = temp;
		return (NULL);
	}
	(*head)->next = temp;
	(*head)->len = _strlen((*head)->str);
	return (*head);
}


/**
 *_strlen - gets the length of a string
 *@str: the string
 *Return: length of the string
 */

int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}
