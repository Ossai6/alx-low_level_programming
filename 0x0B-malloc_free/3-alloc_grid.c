#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 *@width: Integer
 *@height: Integer
 * Return: Return a pointer to the 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, j, x;
	int **p;

	x = width * height;
	p = (int **)malloc(x * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
			{
				p[i][j] = 0;
			}
		}
	}
	return (p);
}
