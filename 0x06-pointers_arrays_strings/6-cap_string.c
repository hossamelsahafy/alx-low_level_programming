#include "main.h"
#include <ctype.h>
#include <stdbool.h>
/**
 * cap_string - function to capitalize all words of string
 *
 * @s: parameter to point to char
 *
 * Return: will be s
 */
char *cap_string(char *s)
{
	int i = 0;
	bool start = true;
	char sep[] = ",;.!?\"(){} \t\n";

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			if (start)
			{
				s[i] = toupper(s[i]);
				start = false;
			}
		}
		else
		{
			if (strchr(sep, s[i]))
			{
				start = true;
			}
		}
		i++;
	}
	return s;
}
