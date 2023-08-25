#include "main.h"
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
	int j;

	char nor[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (str[i] == nor[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}
