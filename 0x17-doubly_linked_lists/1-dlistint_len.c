#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list
 *
 * @h: parameter that point to const dlistint_t
 *
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t i = 0;

	c = h;
	while (c != NULL)
	{
		c = c->next;
		i++;
	}
	return (i);
}
