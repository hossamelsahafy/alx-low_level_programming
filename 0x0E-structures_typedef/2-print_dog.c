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
	{
		printf("nil");
	}
	printf("%s\n", d->name ? d->name : "(nil)");
	printf("%f\n", d->age);
	printf("%s\n", d->owner ? d->owner : "(nil)");
}
