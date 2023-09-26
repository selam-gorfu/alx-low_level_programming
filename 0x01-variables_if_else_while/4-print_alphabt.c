#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if (alph == 'e')
		{
			alph++;
			continue;
		}
		if (alph == 'q')
		{
			alph++;
			continue;
		}
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
