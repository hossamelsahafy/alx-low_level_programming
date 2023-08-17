#include <stdio.h>
/**
 * main - entry point
 *
 * Description: printing long numbers
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	unsigned long int a = 1, b = 2, c;

	printf("%lu, %lu", a, b);
	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
