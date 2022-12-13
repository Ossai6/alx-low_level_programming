#include "main.h"

/**
 * print_alphabet - Prints alphabers in lowercase
 * Return: Always 0
 */

void print_alphabet(void);
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
