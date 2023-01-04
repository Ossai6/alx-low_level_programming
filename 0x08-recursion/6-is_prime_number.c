#include "main.h"

/**
 * is_prime_number - checks if integer is prime number
 * @n: integer
 * Return: Return 1 if prime number, else return 0
 */

int is_prime_number(int n)
{
	if (n % 1 == 0 && n % n == 0)
		return (1);
	else
		return (0);
}
