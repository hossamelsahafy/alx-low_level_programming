#include "main.h"
#include <ctype.h>
/**
 * rot13 - function to replace letter
 *
 * @str: paramater point to char
 *
 * Return: will be str
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			int offset = (str[i] >= 'a' && str[i] <= 'Z') ? 'a' : 'A';

			str[i] = (str[i] - offset + 13) % 26 + offset;
		}
	}
	return (str);
}
