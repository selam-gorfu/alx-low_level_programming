#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: integer 1
 * @b: integer 2
 *
 * return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
