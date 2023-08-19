#include <stdio.h>
#include <math.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			n = (n / i);
		}
	}
	printf("%d\n", n);
return (0);
}
