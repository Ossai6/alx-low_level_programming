#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: The string
 * Return: Return void
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
