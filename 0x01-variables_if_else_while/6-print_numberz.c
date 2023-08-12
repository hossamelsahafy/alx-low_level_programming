#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Description: print some number
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		printf("%d ", i);
		i = i + 1;
	}
	putchar ('\n');
return (0);
}
