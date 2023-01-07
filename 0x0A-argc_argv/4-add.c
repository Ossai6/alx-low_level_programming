#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, SUM = 0;
	char *str;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &str, 10);
		if (*str)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			SUM = SUM +  n;
		}
	}
	printf("%d\n", SUM);

	return (0);
}
