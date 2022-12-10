#include <stdio.h>

/**
 * main - A program to print single base 10 digits
 * Return: Always return 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
