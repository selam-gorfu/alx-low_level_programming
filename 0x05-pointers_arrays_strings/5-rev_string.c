#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: reversed variable
 *
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int x, y, z;

	char c1, c2;

	for (z = 0; s[z] != '\0'; z++)
	{

	}
	x = z - 1;

	y = 0;
	while (x > y)
	{
		c1 = s[y];

		c2 = s[x];

		s[y] = c2;

		s[x] = c1;

		x--;
		y++;
	}
}
