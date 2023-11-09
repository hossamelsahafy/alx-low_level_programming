#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 *
 * @h: parameter that point to const dlistint_t
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t i = 0;

	c = h;
	while(c != NULL)
	{
		printf("%d\n", c->n);
		c = c->next;
		i++;
	}
	return (i);
}
