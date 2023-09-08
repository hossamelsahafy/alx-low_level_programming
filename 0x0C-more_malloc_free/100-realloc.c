#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - function to reallocate a memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated
 *
 * @old_size: parameter point to unsigned integer
 *
 * @new_size: parameter point to unsigned int
 *
 * Return: if ptr == NULL and new_size == 0
 * and n_p == NULL it will return NULL
 * if new_size == old_size it will return ptr
 * otherwise it will return n_p
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_p;
	char *o_p;
	unsigned int i;

	if (ptr == NULL)
		return (NULL);
	if (new_size == 0)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	n_p = malloc(new_size);
	if (n_p == NULL)
		return (NULL);
	o_p = ptr;
	for (i = 0; i < new_size && i < old_size; i++)
	{
		n_p[i] = o_p[i];
	}
	free(ptr);
	return (n_p);
}
