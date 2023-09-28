#include "main.h"
#include <stdio.h>

/**
 * clear_bit - function to set the value of
 * a bit to 0 at a given index
 *
 * @n: parameter that point to unsigned long int
 *
 * @index: parameter to iidentify unsiigned int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}		
