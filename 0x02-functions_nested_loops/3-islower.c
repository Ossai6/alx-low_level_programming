#include "main.h"
/**
 * _islower - Checks if c is lowercase
 * @c: The char to be checked
 * Return: 1 if char c is lowercase else return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
