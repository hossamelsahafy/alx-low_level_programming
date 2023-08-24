#include "main.h"
/**
 * _strncat - function to concatenates two strings
 *
 * @dest: parameter point to char
 *
 * @src: parameter point to char
 *
 * @n: parameter point to integer
 *
 * Return: will be dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int count = 0;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && p - dest < sizeof(dest) - 1 && count < n)
	{
		*p = *src;
		src++;
		count++;
		p++;
	}
	*p = '\0';
	return (dest);
}
