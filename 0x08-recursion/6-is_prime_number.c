#include "main.h"

/**
 * is_prime_number - checks if integer is prime number
 * @n: integer
 * Return: Return 1 if prime number, else return 0
 */

int is_prime_number(int n)
{
	if (n / 1 == n && n / n == 1)
		return (1);
	else
		return (0);
}
