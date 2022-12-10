#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints alphabets in lowercase except e and q
 * Return: Always return 0
 */

int main(void)
{
	char e = 'e';
	char q = 'q';
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
		{
			putchar(lower);
		}
	}
	putchar('\n');
	return (0);
}
