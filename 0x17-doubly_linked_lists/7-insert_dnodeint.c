#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index -  function that inserts
 * a new node at a given position
 *
 * @h: parameter that point to dlistint_t
 *
 * @idx: parameter that point to unsigned int
 *
 * @n: parameter that point to int
 *
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *n_node;
	dlistint_t *c = *h;
	unsigned int i;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (i = 0; i < idx - 1 && c != NULL; i++)
	{
		c = c->next;
	}
	if (c == NULL)
	{
		return (NULL);
	}
	n_node = malloc(sizeof(dlistint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = c->next;
	n_node->prev = c;
	if (c->next != NULL)
	{
		c->next->prev = n_node;
	}
	c->next = n_node;
	return (n_node);
}
