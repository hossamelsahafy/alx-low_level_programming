#include "main.h"
/**
 * _strlen - function to print numbers of letters
 *
 * @s: parameter point to integer
 *
 * *: dereference the pointer and access the value that points to
 *
 * Return: always len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
