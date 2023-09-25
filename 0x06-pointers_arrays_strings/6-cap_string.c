#include "main.h"

/**
 * cap_string - a function that capitalizes all words
 *
 * @s: string
 *
 * Return: string
 */

char *cap_string(char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		if ((s[z - 1] == ' ' || s[z - 1] == '\n'
		|| s[z - 1] == '\t' || s[z - 1] == ','
		|| s[z - 1] == ';' || s[z - 1] == '!'
		|| s[z - 1] == '?' || s[z - 1] == '"'
		|| s[z - 1] == '(' || s[z - 1] == ')'
		|| s[z - 1] == '{' || s[z - 1] == '}'
		|| s[z - 1] == '.')
		&& (s[z] >= 'a' && s[z] <= 'z'))
		{
			s[z] = s[z] - 32;
		}
		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}
		else
		{
			s[z] = s[z];
		}
		z++;
	}

	return (s);
}
