#include "main.h"
#include <ctype.h>
/**
 * rot13 - function to replace letter
 *
 * @str: paramater point to char
 *
 * Return: will be p
 */

char *rot13(char *str)
{
	int i;

	char nor[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *p = str;

	while (*str)
	{
		for (i = 0; i <= 52; i++)
		{
			if (str[i] == nor[i])
			{

				str[i] = rot[i];
				break;
			}
		}
		str++;
	}
	return (p);

}
