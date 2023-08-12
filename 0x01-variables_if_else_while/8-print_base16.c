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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar ('\n');
return (0);
}
