#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a
 * new line.
 * @separator: A string
 * @n: Integer
 * Return: Prints the numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);


	if (separator == NULL)
	{
		for (i = 0; i < n; ++i)
		{
			printf("%d ", va_arg(numbers, unsigned int));
		}
	}
	for (i = 0; i < n; ++i)
	{
	printf("%d%s ", va_arg(numbers, unsigned int), separator);
	}
	va_end(numbers);
	printf("\n");
}
