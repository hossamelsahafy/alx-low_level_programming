#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Description: print letters except some
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l != 'q' && l != 'e')
		{
			putchar (l);
		}
	}
	putchar ('\n');
return (0);
}
