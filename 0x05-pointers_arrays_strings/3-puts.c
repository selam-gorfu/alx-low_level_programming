#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: printed  string
 *
 * Return: Always 0 (Sucess)
 */

void _puts(char *str)
{
	char *r = str;

	while (*r != '\0')
	{
		_putchar(*r);

		r++;
	}

	_putchar('\n');
}
