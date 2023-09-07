#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function to allocate memory for an array, using malloc
 *
 * @nmemb: parameter to define unsigned int
 *
 * @size: parameter to define unsigned int
 *
 * Return: if nmemb or size == 0 iwill be NULL
 * otherwise p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cp;
	char *p;
	int i, result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = nmemb * size;
	p = malloc(result);
	if (p == NULL)
		return (NULL);
	cp = p;
	for (i = 0; i < result; i++)
		cp[i] = 0;
	return (p);
}
