#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: String
 * Return: Return void
 */

void _puts(char *str)
{
	while (*str[i] != '\0')
	{
		_putchar(*str[i]);
		*str++;
	}
}
