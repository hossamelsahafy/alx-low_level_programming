#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Deiscription: print some numbers with commas  except similar numbers
 *
 * putchar: to print the target
 *
 *Return: 0 Always
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
	{
		putchar(i + '0');
		putchar(j + '0');
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar ('\n');
return (0);
}
