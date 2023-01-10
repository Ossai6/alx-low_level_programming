#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatinates all arguments
 * @ac: integer
 * @av: a string
 * Return: return a pointer to the new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, count = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}
	count++;
	p = (char *)malloc(count * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[k] = av[i][j];
			k++;
		}
	p[k] = '\n';
	k++;
	}
	p[k] = '\0';
	return (p);
}
