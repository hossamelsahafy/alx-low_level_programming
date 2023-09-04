#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to concatenates two strings
 *
 * @s1: parameter that point to char
 *
 * @s2: parameter that point to char
 *
 * Return: if p == NULL it will return NULL
 * otherwise it will return p
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(len1 + len2 + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
