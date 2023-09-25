#include "main.h"

/**
 * _memcpy - function that copies a memory area
 *
 * @n: bytes
 *
 * @src: memory area1
 *
 * @dest: memory area2
 *
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		dest[z] = src[z];
	}

	return (dest);
}
