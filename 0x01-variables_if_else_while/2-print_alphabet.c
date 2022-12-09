#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabets in lowercase
 * Return: Always return 0
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
