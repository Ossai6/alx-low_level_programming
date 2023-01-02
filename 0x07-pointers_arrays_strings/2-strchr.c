#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *@s: Pointer to the string
 *@c: Character
 * Return: Returns a pointer to the first occurrence
 */

char *_strchr(char *s, char c)
{
	for (i = 0; s[i] = != '\0'; i++)
	{
		if (s[i] == c || s[i] == '\0')
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
}
