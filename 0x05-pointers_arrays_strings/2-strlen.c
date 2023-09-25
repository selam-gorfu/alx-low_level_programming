#include "main.h"

/**
 * _strlen - returns length of a string
 *
 * @s:  a string measured
 *
 * Return: Always 0 'Success'
 */

int _strlen(char *s)
{
	int z, len = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		len++;
	}

	return (len);
}
