#include "main.h"
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to initialize a variable of type struct dog
 *
 * @d: parameter pont to struct dog
 *
 * @name: parameter point to the name of the dog
 *
 * @age: parameter to indentify the age of the dog
 *
 * @owner: parameter that point to the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
