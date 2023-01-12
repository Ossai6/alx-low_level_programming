#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array,
 * using malloc
 * @nmemb: number of elements
 * @size: byte size
 * Return: Return a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = (int *)calloc(nmemb, size);
	if (pointer == NULL)
	{
		return (NULL);
	}
	return (pointer);
}
