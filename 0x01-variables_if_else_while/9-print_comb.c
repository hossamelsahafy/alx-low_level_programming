#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Deiscription: print some numbers with commas  except
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */
int main(void)
{
/*ring ring evrey night*/
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar (i + '0');
		if (i != 9)
		{
			putchar (',');
			putchar (' ');
		}
	}
	putchar ('\n');
return (0);
}
