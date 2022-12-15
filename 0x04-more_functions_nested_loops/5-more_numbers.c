#include "main.h"

/**
 * more_numbers - Prints 0 to 14 ten times
 * @i: Integer variable
 * @j: Integer variable
 * Return: 0
 */

void more_numbers(int i, int j)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
