#include "main.h"
#include <ctype.h>
#include <stdbool.h>
/**
 * is_separator - function to takes a character c as an input
 *
 * @c: parameter to define char
 *
 * Return: a boolean value indicating whether
 * the character is a separator or not
 */
bool is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == ',' || c == ';'
			|| c == '.' || c == '!' || c == '?' || c == '"'
			|| c == '(' || c == ')' || c == '{' || c == '}');
}
/**
 * cap_string - function to capitalize words
 *
 * @str: parameter poin to char
 *
 * Return: will be str
 */
char *cap_string(char *str)
{
	bool n;
	int i;

	n = true;
	for (i = 0; str[i] != '\0'; i++)
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

}
