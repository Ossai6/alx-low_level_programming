#include "main.h"

/**
 * print_rev - Prints the reverse of a string
 * @s: The string
 * Return: Return void
 */

void print_rev(char *s)
{
	int L = i = j = 0;

	while (*s[i] != '\0')
	{
		count++;
		*s++;
	}
	L = count++;

	for (j = L; j >= 0; j--)
		_putchar(*s[i]);
}
