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
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			if (s1[i] + 32 == s2[i])
			{
				i++;
				continue;
			}
		}
		if (s2[i] >= 'A' && s2[i] <= 'Z') 
		{
			if (s2[i] + 32 == s1[i])
			{
				i++;
				continue;
			}
		}
		return s1[i] - s2[i];
	}
	return s1[i] - s2[i];
}
