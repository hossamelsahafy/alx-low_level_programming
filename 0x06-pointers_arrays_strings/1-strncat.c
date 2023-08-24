#include "main.h"
#include <string.h>
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
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';

	return (dest);
}
