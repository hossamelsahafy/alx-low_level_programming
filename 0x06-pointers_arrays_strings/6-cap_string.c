#include "main.h"
#include <ctype.h>
#include <stdbool.h>
/**
 * cap_string - function to capitalize all words of string
 *
 * @str: parameter to point to char
 *
 * Return: will be str
 */
char *cap_string(char *str)
{
	int i;
	bool start = true;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
		{
			str[i] = '.';
		}
		if (start && isalpha((int)str[i]))
		{
			str[i] = toupper((int)str[i]);
			start = false;
		}
		else if (!start && isalpha((int)str[i]))
		{
			str[i] = tolower((int)str[i]);
		}
		else if (str[i] == ' ' || str[i] == '.' || 
				(str[i] == ' ' && str[i + 1] == '\n'))
		{
			start = true;
		}
	}
	return (str);
}
