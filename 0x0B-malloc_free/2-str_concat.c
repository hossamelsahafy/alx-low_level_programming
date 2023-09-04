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
 * Return: if s1 & s2 == NULL return will be ""
 * otherwise p
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		return ("");
	}
	if (s2 == NULL)
	{
		return ("");
	}
	if (p == NULL)
	{
		return (NULL);
	}
	len1 = strlen(s1);
        len2 = strlen(s2);
	p = malloc(len1 + len2 + 1);

	strcpy(p, s1);
	strcat(p, s2);

	return (p);
}
