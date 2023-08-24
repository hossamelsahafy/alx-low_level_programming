#include "main.h"
/**
 * _strncpy - function to copy two strings
 *
 * @dest: parameter that point to char
 *
 * @src: parameter that point to char
 *
 * @n: parameter to make limit for numbers
 *
 * Return: will be dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
