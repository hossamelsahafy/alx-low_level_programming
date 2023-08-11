#include <stdio.h>
#include <stddef.h>
/**
 * main - function to run the code
 *
 * printf: prints the target
 *
 * Description: print size on bytes
 *
 * Return: 0 Always
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

	printf("Size of a char:%zu \n", sizeof(c))"byte(s)";
	printf("Size of an int:%zu \n", sizeof(i))"byte(s)";
	printf("Size of a long int:%zu \n", sizeof(li))"byte(s)";
	printf("Size of a long long int:%zu \n", sizeof(lli))"byte(s)";
	printf("Size of a float:%zu \n", sizeof(f))"byte(s)";
return (0);
}
