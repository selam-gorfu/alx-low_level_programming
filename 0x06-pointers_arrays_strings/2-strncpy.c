#include "main.h"

/**
 * _strncpy - a function that copies a string
 *
 * @dest: string1
 * @src: string2
 * @n: integer
 *
 * Return: dest.
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int z = 0;

	while (src[z] != '\0' && z < n)
	{
		dest[z] = src[z];
		z++;
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
