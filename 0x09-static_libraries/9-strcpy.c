#include "main.h"
/**
 * _strcpy - function to copy string
 *
 * @dest: parameter point to the buffer
 *
 * @src: parameter point to the string that will be copied
 *
 * Return: itt will return to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';

	return (dest);
}
