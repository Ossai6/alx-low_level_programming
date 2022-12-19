#include "main.h"

/**
 * swap_int - Swapping to inputs
 * @a: Integer 1
 * @b: Integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
