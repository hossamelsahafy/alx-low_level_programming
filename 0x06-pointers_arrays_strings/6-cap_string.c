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
	int i = 0;
	int flag = 1;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			if (flag)
			{
				s[i] = toupper(s[i]);
				flag = 0;
			}
		}
		else
		{
			for (int j = 0; j < 14; j++)
			{
				char sep[] = ",;.!?\"(){}";
				if (s[i] == sep[j] || isspace(s[i]))
				{
					flag = 1;
					break;
				}
			}
		}
		i++;
	}
	return s;
}
