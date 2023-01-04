#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to the power of y.
 *  @x: integer
 *  @y: integer
 *  Return: Integer
 */

int _pow_recursion(int x, int y)
{
	int Z, i = 0;
	if (y <= -1)
		return (-1);
	if (i <= y)
	{
		Z = x * _pow_recursion(x, (y - 1));
	}
	return (Z);
}
