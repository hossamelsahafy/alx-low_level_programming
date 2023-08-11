#include <stdio.h>
/**
 * main - entry point to run the code
 *
 * Description: printing nigative and positive numbers
 *
 * Return: 0 always
 */
int main(void)
{
	long int n = 0;

	if (n > 0)
	{
		printf("%ld is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%ld is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
return (0);
}
