#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string
 * Return: Always void
 */

void rev_string(char *s)
{
	int a = 0;
	int i, j;
	char d;

	while (s[a] != '\0')
	{
		a++;
	}
	j = a - 1;
	for (i = 0; j >= 0 && i < j; j--, i++)
	{
		d = s[i];
		s[i] = s[j];
		s[j] = d;
	}
}
