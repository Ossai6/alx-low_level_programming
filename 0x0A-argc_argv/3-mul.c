#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two arguments
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: integer
 */

int main(int argc, char *argv[])
{
	unsigned int X;
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		X = a * b;

		printf("%i\n", X);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
