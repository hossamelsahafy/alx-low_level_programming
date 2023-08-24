#include "main.h"
/**
 * string_toupper - fuction to change lowcase letter to upper
 *
 * @str: parameter that point to char
 *
 * Return: will be str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
