#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - function to return a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: parameter point to char
 *
 * Return: if p == NULL and str == NULL return will be NULL
 * otherwise p
 */
char *_strdup(char *str)
{
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	p = (char *)malloc(strlen(str) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);

}
