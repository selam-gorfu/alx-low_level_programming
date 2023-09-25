#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string
 *
 * @needle: substring
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *r = haystack, *f = needle;

	while (*haystack)
	{

		while (*needle)
		{

			if (*haystack++ != *needle++)
			{
				break;
			}
		}

		if (!*needle)
		{
			return (r);
		}

		needle = f;

		r++;

		haystack = r;
	}

	return (0);
}
