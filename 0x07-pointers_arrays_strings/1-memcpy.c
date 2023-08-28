#include "main.h"

/**
 * _memcpy - funuction to copy memory area
 *
 * @dest: parameter that poin to char
 *
 * @src: parameter point to char
 *
 * @n: parameter point to unsigned integer
 *
 * Return: will be dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	return (dest);
}
