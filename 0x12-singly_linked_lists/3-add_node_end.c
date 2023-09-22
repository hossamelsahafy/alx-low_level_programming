#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function to add a new node at the end of a list_t list
 *
 * @head: parameter to define list_t
 *
 * @str: parameter that point to const char
 *
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *last = *head;
	size_t len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);

	if (n_node->str == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->len = len;

	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while (last->next != NULL)
	{
		last =  last->next;
	}
	last->next = n_node;
	return (n_node);
}
