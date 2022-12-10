#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all combinations of single digits
 *
 * Return: Always return 0
 */

int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
