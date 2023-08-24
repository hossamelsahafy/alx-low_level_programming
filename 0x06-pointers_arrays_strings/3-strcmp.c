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
	int i, result;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		result  = s1[i] - s2[i];
		if (result != '\0')
		{
			return (result);
		}
	}
	return (s1[i] - S2[i]);

}
