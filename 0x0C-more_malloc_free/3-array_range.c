#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: first integer
 * @max: second integer
 * Return: A pointer
 */

int *array_range(int min, int max)
{
	int *p, x, i;

	if (min > max)
	{
		return (NULL);
	}
	x = (max - min) + 1;
	p = (int *)malloc(x * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < x; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
