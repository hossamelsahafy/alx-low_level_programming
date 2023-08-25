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
	bool start = 1;
	char sep[] = ",;.!?\"(){} \t\n";

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			if (start)
			{
				s[i] = toupper((unsigned char)s[i];
				start = 0;
			}
		}
		else
		{
			if (strchr(sep, s[i]))
			{
				start = 1;
			}
		}
		i++;
	}
	return (s);
}
