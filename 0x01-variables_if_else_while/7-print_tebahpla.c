#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Description: print letters
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar (c);
	}
	putchar ('\n');
return (0);
}
