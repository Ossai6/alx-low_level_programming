#include "main.h"

/**
 * *_memcpy - a function that copies a memory area
 *@dest: Destination string
 *@src: Source string
 *@n: Number of bytes
 * Return: Returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
