#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Integer value
 * @argv: String
 * Return: Strings
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
