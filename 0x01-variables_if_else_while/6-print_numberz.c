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
	char c;

	for (i = 0; i < 10; i++)
	{
		c = i + '0';
		write(1, &c, 1);
	}
	c = '\n';
return (0);
}
