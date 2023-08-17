#include <stdio.h>
/**
 * main - entry function
 *
 * Description: print even numbers doesnt exceed 4 million
 *
 * Return: always 0
 *
 */
int main(void)
{
	float t;
	unsigned long i = 0, j = 1, z;

	while (1)
	{
		z = i + j;

		if (z > 4000000)
		{
			break;
		}
		if ((z % 2) == 0)
		{
			t += z;
		}

		i = j;
		j = z;
	}
	printf("%.0f\n", t);

	return (0);
}
