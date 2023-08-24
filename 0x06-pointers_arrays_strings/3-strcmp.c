#include "main.h"
/**
 * _strcmp - function to compare two strings
 *
 * @s1: parameter to point to char
 *
 * @s2: parameter point to char
 *
 * Return: if s1 = s2 return will be zero
 * if s1 > s2 return will be s1
 * if s2 > s1 return s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, n;

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		s1 = s2;
		if (s1 == s2)
		{
			return (0);
		}
		if (s1 > s2)
		{
			return (S1);
		}
		if (s1 < s2)
		{
			return (S2);
		}
	}

}
