#include "lists.h"
#include <stdio.h>
/**
 * 
 * 
 * 
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t i = 0;

	c = h;
	while(c != NULL)
	{
		c = c->next;
		i++;
	}
	return (i);
}
