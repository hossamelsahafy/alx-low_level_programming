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
	int tmp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];

		a[i] = a[n - i - 1];

		a[n - i - 1] = tmp;
	}
}
