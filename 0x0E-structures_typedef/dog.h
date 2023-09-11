#ifndef DOG_H

#define DOG_H
/**
 * struct dog - type to discripe dog
 *
 * @name: parameter that point to the name of the dog
 *
 * @age: parameter to indentify the age of the dog
 *
 * @owner: parameter to point to the owner of the dog
 */
typedef struct dog;
struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
