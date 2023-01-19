#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its
 * parameters
 * @n: first argument
 * Return: Return and integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result = 0;
	va_list inputs;

	va_start(inputs, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			result = result + va_arg(inputs, unsigned int);
		}
	}
	va_end(inputs);
	return (result);
}
