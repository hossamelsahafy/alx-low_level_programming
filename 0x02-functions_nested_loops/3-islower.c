#include "main.h"
/**
 * _islower - to check the lower character
 * _putchar: print the target
 * @c: character to check
 * Description: checking for the lower chracter
 * Return: 1 if c is lower case 0 otherwise
 */
int _islower(int c)
{
        if (c >= 97 && c <= 122)
		return (1);
	return (0);

}
