#include "main.h"
#define SIZE 5
/**
 * leet - function to replace letter by numbers
 *
 * @str: parameter point to char
 *
 * Return: will be p
 */
char *leet(char *str)
{
	char *p = str;
	char a[] = {'A', 'E', 'O', 'T', 'L'};
	int v[] = {4, 3, 0, 7, 1};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (str[i] == a[j] || str[i] == a[j] + 32)
			{
				str[i] = '0' + v[j];
			}
		}
	}
	return (p);
}
