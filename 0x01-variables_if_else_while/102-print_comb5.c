#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Deiscription: print some numbers with commas
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98 i++)
	{
		for (j = i + 1; j <= 99 j++)
		{
			putchar (i / 10 + '0');
			putchar (i % 10 + '0');
			putchar (' ');
			putchar (j / 10 + '1');
			putchar (j % 10 + '0');
			if (i != 98 || j != 99)
			{
				putchar (',');
				putchar (' ');
			}
		}
	}
return (0);
}
