#include "main.h"

/**
 * _strstr - function to that locates a substring
 *
 * @haystack: parameter poin to char
 *
 * @needle: parameter that point to char
 *
 * Return:if *p == *q so it will return p
 * if no match was found return will be Null
 */
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack;
	char *q;

	while (*p != '\0')
	{
		q = needle;
		while (*q != '\0')
		{
			if (*p == *q)
			{
				return (p);
			}
			p++;
		}
		q++;
	}
	return (NULL);
}
