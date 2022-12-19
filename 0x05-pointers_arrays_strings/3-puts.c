#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: String
 * Return: Return void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		str++;
	}
	_putchar('\n');
}
