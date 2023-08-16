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
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum)
return (0);
}
