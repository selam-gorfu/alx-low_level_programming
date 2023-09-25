#include "main.h"

/**
 * _strcpy - a function that copies a string
 *
 * @src: points the string
 *
 * @dest: pointer
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int y;

	int z;

	for (z = 0; src[z] != '\0'; z++)
	{

	}
	for (y = 0; y <= z; y++)
	{
		dest[y] = src[y];
	}

	return (dest);
}
