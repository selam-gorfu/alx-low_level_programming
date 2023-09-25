#include "main.h"

/**
 * puts_half - a function that prints second half of a string
 *
 * @str: printed variable
 * return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int len;

	int y, z;

	for (len = 0; str[len] != '\0'; len++)
	{

	}
	y = (len - 1) / 2;
	for (z = y + 1; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}

	_putchar('\n');
}
