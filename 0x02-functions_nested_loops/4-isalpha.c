#include "main.h"
/**
 * _isalpha - to check the lower & upper cases
 *
 * @c: character to check
 *
 * Description: checking for the lower and upper cases
 *
 * Return: 1 if c is lower or upper case 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
