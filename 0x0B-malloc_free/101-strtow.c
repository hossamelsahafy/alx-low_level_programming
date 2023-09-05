#include "main.h"
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 *
 * @str: parameter point to char
 *
 * Return: if str == NULL or str[0] == '\0' it will  return 0
 * otherwise return will be count
 */
int  count_words(char *str)
{
	int count = 0;
	int i_word = 0;

	if (str == NULL || str[0] == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (*str  ==  ' ')
		{
			i_word = 0;
		}
		else  if (word == 0)
		{
			i_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * copy_word - function to copy a word from a string to a new allocated space
 *
 * @str: parameter point to char
 *
 * Return: if word == NULL it will return NULL
 * otherwise return will be word
 */

char  *copy_word(char *str)
{
	char *word;
	int  i = 0;
	int len = 0;

	while (str[len] && str[len] != ' ')
	{
		len++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
	{
		return (NULL);
	}
	while  (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
/**
 * strtow - function to split a string into words
 *
 * @str: parameter point to char
 *
 * Return: NULL  on failure
 */
char **strtow(char *str)
{
	char **words;
	int i = 0;
	int j = 0;
	int n_word;

	n_word = count_words(str);
	if (n_word == 0)
	{
		return (NULL);
	}
	words = malloc(sizeof(char *) * (n_word + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	while (i < n_word)
	{
		while (str[j] == ' ')
		{
			j++;
		}
		words[i] = copy_word(str + j);
		if (words[i] == NULL)
		{
			while (i >= 0)
			{
				free(words[i]);
				i--;
			}
			free(words);
			return (NULL);
		}
		while (str[j] && str[j] != ' ')
			j++;
		i++;
	}
	words[i] = NULL;
	return (words);
}
