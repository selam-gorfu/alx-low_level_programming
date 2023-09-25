#include "main.h"

/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: c.
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;

		s2++;
	}
	if (s1 != s2)
		c = *s1 - *s2;
	return (c);
}
