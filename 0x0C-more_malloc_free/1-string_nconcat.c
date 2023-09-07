#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenates two strings
 *
 * @s1: parameter point to char
 *
 * @s2: parameter point to char
 *
 * @n parameter to define unsigned integer
 *
 * Return: if n_str == NULL otherwise will be n_str
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *n_str;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	n_str = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (n_str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		n_str[i] = s1[i];
	for (j = 0; j < n; j++)
		n_str[i + j] = s2[j];
	n_str[i + j] = '\0';
		return (n_str);
}
