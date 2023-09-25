#include "main.h"

/**
 * leet - a function that encodes a string to 1337
 *
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int x = 0, y, z;

	char c[] = "oOlLeEaAtT";
	char h[] = "0011334477";

	while (s[x] != '\0')
	{
		y = 0;
		z = 0;
		while (c[y] != '\0')
		{
			if (s[x] == c[y])
			{
				z = y;
				s[x] = h[z];
			}
			y++;
		}
		x++;
	}
	return (s);
}
