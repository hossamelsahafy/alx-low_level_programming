#include "main.h"
#include <ctype.h>
#include <stdbool.h>
/**
 * cap_string - function to capitalize all words of string
 *
 * is_separator - function returns a value of type bool
 *
 * @str: parameter to point to char
 *
 * @c: parameter to define char
 *
 * Return: will be s
 */
bool is_separator(char c)
{
	return c == ' ' || c == '\t' || c == '\n'
		|| c == ',' || c == ';'
		|| c == '.' || c == '!' || c == '?' || c == '"'
		|| c == '(' || c == ')' || c == '{' || c == '}';
}

char *cap_string(char *str)
{
	bool n = true;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '\t')
		{
			str[i] = ' ';
		}
		if (is_separator(str[i]))
		{
			n = true;
		}
		else if (n)
		{
			str[i] = toupper(str[i]);
			n = false;
		}
	}
	return (str);
}

