#include <main.h>
/**
 * _isupper - function to check the upper cases letter
 * @c: parameter to check the letters
 * Return: if the letter is uppercase the return will be 1 else will be 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	
	else
		return (0);
}
