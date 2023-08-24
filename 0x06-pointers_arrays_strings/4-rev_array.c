#include "main.h"
/**
 * reverse_array - function to reverse array
 *
 * @a: parameter point to integer
 *
 * @n: parameter to identfy integer
 */
void reverse_array(int *a, int n)
{
	int r[1500];
	int i;

	for (i = 0; i < n; i++)
	{
		r = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = r[i];
	}
}
