#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: String
 * Return: Returns a pointer to the new memory
 */

char *_strdup(char *str)
{
	char *ptstr;
	int str_len = 0, count;

	/* find the length of the string */
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	if (str == NULL)
		return (NULL);

	ptstr = (char *)malloc((str_len * sizeof(char)) + 1);

	if (ptstr == NULL)
		return (NULL);

	else
	{
		for (count = 0; str[count] != '\0'; count++)
		{
			ptstr[count] = str[count];
		}
	ptstr[count] = '\0';
	}
	return (ptstr);
}
