#include "main.h"
/**
 *  swap_int - function to swap integer
 *
 *  @a: parameter point to integer
 *
 *  @b: parameter point to integer
 *
 *  *: dereference the pointer and access the value that points to
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
