#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function to  concatenate all the arguments of your program
 *
 * @ac: parameter to indetify integer
 *
 * @av: parameter poin to char
 *
 * Return: if ac == 0 or av == '\0' it  will return NULL
 * otherwise str
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int k;
	int len;

	if (ac == 0 || av == '\0')
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0')
		len++;
		len++;
	}
	len++;
	str =  malloc(sizeof(char) * len);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0')
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
