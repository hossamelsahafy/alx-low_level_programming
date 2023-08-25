#include "main.h"
/**
 * leet - function to replace letter by numbers
 *
 * Return: will be p
 */
char *leet(char *str)
{
	char *p = str;
	char a[] = {'A', 'E', 'O', 'T', 'L'}
	int v[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (str[i] != '\0')
	{
		for (i = 0; i < sizeof(a) / sizeof(char); i++)
		{
			if (str[i] == a[i] || str[i] == a[i] + 32)
			{
				str[i] = 48 + v[i];
			}
		}
		str++;
	}
	return (p);
}
