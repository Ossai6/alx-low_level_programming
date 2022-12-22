#include "main.h"

/**
 * cap_string - Capitalizes a string
 * @s: String
 * @' ': space
 * Return: Return the string
 */

char *cap_string(char *)
{
	int i;

	for (i=0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] = s[i + 1] -32;
		}
	}
	printf ("%s\n", s);
}
