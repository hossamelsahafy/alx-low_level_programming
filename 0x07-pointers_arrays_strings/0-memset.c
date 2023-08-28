#include "main.h"

/**
 * _memset - function to fills memory with a constant byte
 *
 * @s: parameter point to char
 *
 * @b: parameter to identfy char
 *
 * @n: parameter to identfy unsigned integer
 *
 * Return: will be s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		*p = b;
	p++;
	n--;
	}
	return (s);
}
