#include "main.h"
#include <string.h>
#include <ctype.h>

/***
 * is_palindrome_rec - function to check if a substring
 * is a palindrome using recursion
 *
 * @s: parameter point to char
 *
 * @i: parameter to identify integer
 *
 * @j: parameter to identify integer
 *
 * Return: Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_rec(char *s, int i, int j)
{
	char c1 = tolower(s[i]);
	char c2 = tolower(s[j]);

	if (i >= j)
	{
		return (1);
	}
	if (c1 != c2)
	{
		return (0);
	}
	return (is_palindrome_rec(s, i + 1, j - 1));
}
/**
 * is_palindrome - function to return 1
 * if a string is a palindrome and 0 if not
 *
 * @s: parameter point to char
 *
 * Return: Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (is_palindrome_rec(s, 0, len - 1));
}
