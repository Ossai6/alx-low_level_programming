#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string
 * Return: Always void
 */

void rev_string(char *s)
{
	int i = L = 0;
	int j;
	char ch;

	while (*s[i] != '\0')
		i++;
	L = i;
	for (j = i - 1; j <= L; j++)
	{
		ch = s[i];
		*s[i] = *s[L - 1 - j];
		*s[L - 1 - j] = ch;
	}
	_putchar(*s);
}
