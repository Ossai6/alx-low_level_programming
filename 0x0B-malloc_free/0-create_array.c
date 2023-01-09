#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and
 * initializes it with a specific char
 * @size: Number of elements to be contained in the array
 * @c: a character to be stored in the array
 * Return:
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		ptr[i] = c;
	if (ptr == NULL)
		return (ptr);
	return (ptr);
}
