#include "main.h"
#include <stdio.h>

/**
 * print_array -a function that  prints n elements of integers
 *
 * @n: no of elements of array
 * @a: pointer
 *
 * Return: Always 0 Success)
 */

void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
