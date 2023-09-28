#include "main.h"
#include <stdio.h>

/**
 * set_bit - function to sets the value of
 * a bit to 1 at a given index
 *
 * @n: parameter to identify unsigned long int
 *
 * @index: parameter point to unsigned long int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}
	*n = *n || (1UL << index);
	rerturn (1);
}
