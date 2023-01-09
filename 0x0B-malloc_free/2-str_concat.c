#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 *@s1: first string
 *@s2: second string
 * Return: Return a pointer to the new memory
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, m, len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}
	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}
	p = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < len1; k++)
		{
			p[k] = s1[k];
		}
		for (m = 0; m < len2; m++)
		{
			p[k + m] = s2[m];
		}
	}
	p[k + m] = '\0';
	return (p);
}
