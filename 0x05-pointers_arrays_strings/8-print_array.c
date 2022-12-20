#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the n elements of an array
 * @a: Array name
 * @n: number of elements
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
		printf("%d, ", a[i]);
}
