#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function to print name
 *
 * @name: parameter point to char
 *
 * @f: parameter point to f
 *
 * Return: if  name or f  == NULL i will exit the function
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL && f == NULL)
	{
		return;
	}
	f(name);
}
