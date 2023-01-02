#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: pointer to the array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, X = 0, Y = 0;


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			X = a[0][0] + a[1][1] + a[2][2];
			Y = a[0][2] + a[1][1] + a[2][0];
		}
	}
	printf("%d", "%d", X, Y);
}
