#include "main.h"

/**
 * _strspn -a function that gets length of prefix substring
 *
 * @s: intial segment
 *
 * @accept: bytes
 *
 * Return: integer.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	char *h = accept;

	while (*s++)
	{
		while (*accept++)

			if (*(s - 1) == *(accept - 1))
			{
				i++;

				break;
			}

		if (!(*--accept))
		{
			break;
		}

		accept = h;
	}

	return (i);
}
