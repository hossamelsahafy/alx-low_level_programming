#include "main.h"

/**
 * print_diagsums - function to print the sum of 
 * the two diagonals of a square matrix of integers
 *
 * @a: parameter that poin to integer
 *
 * @size: parameter to identfy integer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + *((a + i * size) + j);
			}
			if (i + j  == size - 1)
			{
				sum2 = sum2 + *((a + i *size) + j;
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
