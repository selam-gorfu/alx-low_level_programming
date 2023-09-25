#include "main.h"

/**
 * _atoi - a function that converts a string to an integer
 *
 * @s: a string to be converted
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int n = 0;

	int y = 1, z = 0;

	if (s[n] == '-')
	{
		y *= -1;
		n++;
	}

	for (n = 0; s[n] >= '0' && s[n] <= '9'; n++)
	{
		z = z * 10 + (s[n] - '0');
	}
	z *= y;

	return (z);
}
