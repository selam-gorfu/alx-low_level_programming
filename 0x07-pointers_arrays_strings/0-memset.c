#include "main.h"

/**
 * _memset - a function that fills memory with constant byte
 *
 * @s: memory area size
 *
 * @n: byte sizes
 *
 * @b: constant byte
 *
 * Return: memory size
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		s[z] = b;
	}

	return (s);
}
