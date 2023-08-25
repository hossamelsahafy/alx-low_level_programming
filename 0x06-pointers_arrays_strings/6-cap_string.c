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

	while (str[i] != '\0')
	{
		if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'
				|| str[i - 1] == '\n' || str[i - 1] == ',' || str[i - 1] == ';'
				|| str[i - 1] == '.' || str[i - 1] == '?' || str[i - 1] == '"'
				|| str[i - 1] == '!' || str[i - 1] == '(' || str[i - 1] == ')'
				|| str[i - 1] == '{' || str[i - 1] == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
