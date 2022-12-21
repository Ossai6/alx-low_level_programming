#include "main.h"

/**
 * _strcat - Concatinates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Returns the string dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
