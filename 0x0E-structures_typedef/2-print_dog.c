#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function to print struct dog
 *
 * @d: parameter that point to struct dog
 *
 * Return: if d == NULL it will do nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
