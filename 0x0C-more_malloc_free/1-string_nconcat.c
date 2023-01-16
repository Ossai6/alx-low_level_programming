#include "main.h"
#include <stdlib.h>

/**
 *  string_nconcat - function tgat concatenates two strings
 *  @s1: first string
 *  @s2: second string
 *  @n: integer
 *  Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	unsigned int k = 0, len1 = 0, m = 0, len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = 0;
	if (s2 == NULL)
		s2 = 0;
	while (s1[i] != '\0')
	{
		++len1;
		i++;
	}
	while (s2[j] != '\0')
	{
		++len2;
		j++;
	}
	if (n >= len2)
	{
		ptr = malloc(sizeof(char) * (len1 + len2 + 1));
		if (ptr == NULL)
			return (NULL);
	}
	ptr = (char *)malloc(((len1 + n) * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (m < len1)
	{
		ptr[m] = s1[m];
		m++;
	}
	while (k < len2)
	{
		ptr[k + len1] = s2[k];
		k++;
	}
	ptr[len1 + len2] = '\0';
	return (ptr);
}
