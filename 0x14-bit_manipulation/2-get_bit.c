#include <stdio.h>
#include "main.h"

/**
 * get_bit - function to return the value of
 * a bit at a given index
 *
 * @n: parameter to identify unsigned long int
 *
 * @index: paramter to identify unsigned int
 *
 * Return: the value of the bit at index
 * index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
