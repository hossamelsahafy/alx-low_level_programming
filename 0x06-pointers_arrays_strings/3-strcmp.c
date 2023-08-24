#include "main.h"
/**
 * _strcmp - function to compare two strings
 *
 * @s1: parameter to point to char
 *
 * @s2: parameter point to char
 *
 * Return: will be result
 */
int _strcmp(char *s1, char *s2)
{
	int i; 
	int result;

	for (i = 0; s1[i] != '\0' || s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);

}
