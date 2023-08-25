#include "main.h"
#include <ctype.h>
/**
 * cap_string - function to capitalize all words of string
 *
 * @s: parameter to point to char
 *
 * Return: will be s
 */
char *cap_string(char *s)
{
	int i; 
	bool start;
	char sep[];

	i = 0;
	start = true;
	sep[] = ",;.!?\"(){} \t\n";

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
