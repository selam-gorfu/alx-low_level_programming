#include "main.h"

/**
 * puts2 - it  prints every other char
 *
 * @str: printed variable
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	char *r = str;

	while (*r != '\0')
	{
		_putchar(*r);

		r += 2;
	}

	_putchar('\n');
}
