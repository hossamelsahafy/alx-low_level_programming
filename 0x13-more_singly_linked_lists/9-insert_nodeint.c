#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function to
 * insert a new node at a given position
 *
 * @head: parameter point to listint_t
 *
 * @idx: parameter to identify unsigned int
 *
 * @n: parameter to identify integer
 *
 * Returns: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	listint_t *tmp;
	unsigned int i = 0;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	tmp = *head;
	while (tmp != NULL && i < idx - 1)
	{
		tmp = tmp->next;
		i++;
	}
	if (tmp == NULL || i > idx - 1)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = tmp->next;
	tmp->next = n_node;
	return (n_node);
}
