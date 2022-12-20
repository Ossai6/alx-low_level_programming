#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: The string
 * Return: Return void
 */

void print_rev(char *s)
{
	int L = 0;
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	L = i++;

	for (j = L; j >= 0; j--)
		_putchar(s[i]);
	_putchar('\n');
}
