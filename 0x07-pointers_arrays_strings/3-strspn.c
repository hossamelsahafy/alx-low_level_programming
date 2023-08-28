#include "main.h"

/**
 * _strspn - function to gets the length of a prefix substring
 *
 * @s: parameter point to char
 *
 * @accept: parameter point to accept
 *
 * Return: will be n the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	char *p = s;
	char *q;
	unsigned int n = 0;

	while (p != '\0')
	{
		q = accept;
		while (q != '\0')
		{
			if (*p == *q)
			{
				n++;
				break;
			}
			q++;
		}
		if (*q == '\0')
		{
			break;
		}
	}
	return (n);
}


