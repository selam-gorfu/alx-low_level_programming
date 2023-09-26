#include <stdio.h>

/**
 * main - main entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y = 0, z = 8, y1 = 1, z1 = 9;

	while (y <= z)
	{
		y1 = y + 1;
		while (y1 <= z1)
		{
			putchar(y + '0');
			putchar(y1 + '0');
			if (y != z)
			{
				putchar(',');
				putchar(' ');
			}
			y1++;
		}
		y++;
	}

	putchar('\n');
	return (0);

}
