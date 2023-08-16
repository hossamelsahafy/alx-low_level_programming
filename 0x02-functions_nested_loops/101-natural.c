#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the sum of 3 or 5 below 1024
 *
 * printf: to print the target
 *
 * Return:  always 0
 */

int main(void)
{
	int i;
	int z;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			z += i;
		}
	}
	printf("%d\n", z);
return (0);
}
