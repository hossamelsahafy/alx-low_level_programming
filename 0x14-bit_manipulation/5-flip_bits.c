#include <stdio.h>
#include "main.h"

/**
 * flip_bits - function to return the number of bits you would
 * need to flip to get from one number to another
 *
 * @n: parameter to identify unsigned long int
 *
 * @m: parameter to identify unsigned long int
 *
 * Return: will be c
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m;
	unsigned int c = 0;

	while (xor != '\0')
	{
		count = count + xor & 1;
		xor >>= 1;
	}
	return (c);
}
