#include "main.h"

/**
 * _strchr - function to  locate a character in a string
 *
 * @s: parameter point to char
 *
 * @c: parameter poin to char
 *
 * Return: if s == c it will return the pointer s
 * else it will return null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
	{
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (NULL);
	}
}
