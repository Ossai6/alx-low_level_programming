#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string
 * Return: Always void
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	char ch;

	while (s[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		ch = s[i];
		s[i] = s[L - 1 - i];
		s[L - 1 - i] = ch;
	}
	_putchar(s);
}
