#include "main.h"

/**
 * _isdigit - function that checking the digit num
 *
 * @c: parameter to idebtify numbers
 *
 * Return: if c is digit return witll be 1 else 0
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
		return (1);
	else
		return (0);
}
