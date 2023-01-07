#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Integer value
 * @argv: String
 * Return: An integer
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", (argc - 1));

	return (0);
}
