#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alph = 'a';
	char alph2 = 'A';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	while (alph2 <= 'Z')
	{
		putchar(alph2);
		alph2++;
	}
	putchar('\n');
	return (0);
}
