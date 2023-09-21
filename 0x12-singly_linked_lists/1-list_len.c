#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function to return the number of elements
 * in a linked list_t list
 *
 * @h: parameter point to list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		s++;
		h = h->next;
	}
	return (s);
}
