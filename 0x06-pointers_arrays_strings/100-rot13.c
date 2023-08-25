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
		if (str[i] >= 'a' str[i] < 'n')
		{
			str[i] = str[i] + 13;
		}
		else if (str[i] >= 'n' str[i] <= 'z')
		{
			str[i] = str[i] - 13;
		}
	}
	return (str);
}
