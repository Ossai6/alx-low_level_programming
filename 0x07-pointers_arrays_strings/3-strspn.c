#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *@s: Pointer to the string
 *@accept: String
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if s[i] == accept[j];
				n++;
			}
		else
			return (n);
	}
	return (n);
}
