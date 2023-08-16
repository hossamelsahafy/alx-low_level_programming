#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print first 50 num
 * of fibonacci
 *
 * Return: always zero
 */
int main(void)
{
	int x;
	unsigned long i = 0, j = 1, z;

	for (x = 0; x < 50; x++)
	{
		z = i + j;
		printf("%lu", z);

		i = j;
		j = z;

		if (x == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
