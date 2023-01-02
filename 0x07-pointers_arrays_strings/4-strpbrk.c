#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string
 *@s: Pointer to the string
 *@accept: String
 * Return: Returns a pointer to the byte in s that matches one
 * of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
