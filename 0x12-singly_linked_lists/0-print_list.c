#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function to print all the elements of a list_t list
 *
 * @h: parameter point to list_l
 *
 *
 * Return: will be number of node
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		if (h->str)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		s++;
		h = h->next;
	}
	return (s);
}



