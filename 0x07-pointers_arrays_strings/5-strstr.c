#include "main.h"

/**
 * _strstr - function to that locates a substring
 *
 * @haystack: parameter poin to char
 *
 * @needle: parameter that point to char
 *
 * Return:if *p2 == '\0' so it will return haystack
 * if haystack reached the end no match will found
 * so it will return NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;

	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (p2 != '\0' && p2 == p1)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
