#include "main.h"

/**
 * _strpbrk - function to search a string for any of a set of bytes
 *
 * @s: parameter that poin to char
 *
 * @accept: parameter that poin to char
 *
 * REturn: if *p == *q it will return p
 *
 * Return: if no match was found it wil return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;
	char *q;

	while (*p != '\0')
	{
		q = accept;
		while (*q != '\0')
		{
			if (*p == *q)
			{
				return (p);
			}
			q++;
		}
		p++;
	}
	return (NULL);
}
