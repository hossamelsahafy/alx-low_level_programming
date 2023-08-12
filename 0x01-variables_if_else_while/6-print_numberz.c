#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Description: print some numbers
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
		putchar(i + '0');
		i++;
	}
	putchar('\n');
return (0);
}
