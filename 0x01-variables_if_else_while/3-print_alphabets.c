#include <stdio.h>
/**
 * main - this function to start coding
 *
 * Description: print some upper and lower letters
 *
 * putchar: to print the target
 *
 *Return: 0 Always
 */
int main(void)
{
	char l;

	for(l = 'a'; l <= 'z'; l++)
	{
		putchar (l);
	}
	for(l = 'A'; l <= 'Z'; l++)
	{
		putchar (l);
	}
	putchar ('\n');
return (0);
}
