#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 *@n: Number to find the factorial of 
 * Return: Return the factorial of n
 */

int factorial(int n)
{
	int X;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
	{
		X = n * factorial(n - 1);
		return (X);
	}

}
