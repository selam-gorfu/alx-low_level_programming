#include <stdio.h>

/**
 * main - main entry
 *
 * Return: 1 if success
 */

int main(void)
{
	char *w = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*w)
	{
		putchar(*w++);
	}
	return (1);
}
