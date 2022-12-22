#include "main.h"

/**
 * _strncpy - Copies a string src to anothe string dest
 * @dest: Destination string
 * @src: Source string
 * @n: Integer
 * Return: Return dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (;i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
