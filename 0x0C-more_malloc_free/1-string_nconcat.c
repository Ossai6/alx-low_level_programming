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
	int i = 0, j = 0, m = 0;
	unsigned int k = 0, len1 = 0, len2 = 0;
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
		ptr = (char *)malloc((len2 * sizeof(char)) + 1);
		if (ptr == NULL)
			return (NULL);
	}
	ptr = (char *)malloc(((len1 + n) * sizeof(char)) + 1);
	if (ptr == NULL)
		return (NULL);
	while (s1[m] != '\0')
	{
		ptr[m] = s1[m];
		m++;
	}
	while (k < n)
	{
		ptr[m] = s2[k];
		m++;
		k++;
	}
	ptr[m] = '\0';
	return (ptr);
}
