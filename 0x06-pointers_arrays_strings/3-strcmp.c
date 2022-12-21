#include "main.h"

/**
 * _strcmp - Compares two strings s1 and s2
 * @s1: First string
 * @s2: Second string
 * Return: Return the string
 */

int _strcmp(char *s1, char *s2)
{
	int i, S = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] >= s2[i] || s1[i] <= s2[i])
		{
			S = s1[i] - s2[i];
		}
		break;
	}
	return (S);
}
