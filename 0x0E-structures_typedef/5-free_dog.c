#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free dogs
 *
 * @d: parameter point to dog_t
 *
 * Return: will return to the function without freeing anything
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
