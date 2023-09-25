#include "main.h"

/**
 * reverse_array -a function that to reverses an array
 *
 * @a: array
 * @n: number of elements
 *
 * return: 0
 */

void reverse_array(int *a, int n)
{
	int y = 0;

	int z;

	while (y < n)
	{
		n--;

		z = a[y];

		a[y] = a[n];

		a[n] = z;

		y++;
	}
}
