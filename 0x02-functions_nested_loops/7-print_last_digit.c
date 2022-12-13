#include "main.h"

/**
 * print_last_digit - Computes the last digit of a number
 *@n: Value to be computed
 *@r: Value to also be computed
 * Return: Return the last digit of a number
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;

	_putchar((n % 10) + '0');
	return (n % 10);
}
