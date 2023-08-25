#include "main.h"
#include <ctype.h>

/**
 * cap_string - function to capitalize words
 *
 * @str: parameter poin to char
 *
 * Return: will be str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 || str[i] == ' ' || str[i] == '\t'
				|| str[i] == '\n' || str[i] == ',' || str[i] == ';'
				|| str[i] == '.'  || str[i] == '?' || str[i] == '"'
				|| str[i] == '!'  || str[i] == '(' || str[i] == ')'
				|| str[i] == '{'  || str[i] == '}')
		{
			if (str[i - 1] >= 'a' && str[i - 1] <= 'z')
				str[i - 1] = str[i - 1] - 32;
			if (str[i] == '\t')
			{
				str[i] = ' ';
			}
		}
		i++;
	}
	return (str);
}
