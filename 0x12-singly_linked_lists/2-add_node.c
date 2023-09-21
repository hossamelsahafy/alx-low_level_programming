#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node -  function to adds a new node at the
 * beginning of a list_t list
 *
 * @head: parameter point to list_t
 *
 * @str: parameter point to const char
 *
 * Return: will be address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
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
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}




