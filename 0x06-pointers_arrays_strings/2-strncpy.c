#include "main.h"
/**
 * _strncpy - function to copy two strings
 *
 * @dest: parameter that point to char
 *
 * @src: parameter that point to char
 *
 * @n: parameter to make limit for numbers
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	while (i < n)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	
	
}
