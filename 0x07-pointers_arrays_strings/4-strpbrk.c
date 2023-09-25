#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any set of bytes
 *
 * @s: string
 *
 * @accept: bytes
 *
 * Return: string or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{

		for (z = 0; accept[z]; z++)
		{

			if (*s == accept[z])
			{
				return (s);
			}
		}

		s++;
	}

	return (NULL);
}
