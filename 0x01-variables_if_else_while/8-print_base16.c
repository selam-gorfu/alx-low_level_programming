#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	char alph = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (alph <= 'f')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
