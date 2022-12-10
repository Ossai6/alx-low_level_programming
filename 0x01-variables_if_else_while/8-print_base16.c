#include <stdio.h>

/**
 * main - A program to print single base 10 digits
 * Return: Always return 0
 */
int main(void)
{
	int i;
	char j;

	while (i < 10)
	{
		printf("%d", i);
	i++;
	}
	for (j = 'a'; j < 'g'; j++)
	{
		putchar(j);
	}
	printf("\n");

	return (0);
}
