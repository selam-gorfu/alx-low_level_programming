#include "main.h"

/**
 * print_rev - prints in a reverse order
 *
 * @s: string
 *
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int y, z = 0;

	for (y = 0; s[y] != '\0'; y++)
	{

	}

	for (z = y - 1; z >= 0; z--)
	{
		_putchar(s[z]);
	}

	_putchar('\n');
}
