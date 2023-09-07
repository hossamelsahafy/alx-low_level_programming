#include "main.h"

/**
 * malloc_checked - function to allocate meomeory using malloc
 *
 * @b: parameter to define unsigned integer
 *
 * Return: will be p
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
