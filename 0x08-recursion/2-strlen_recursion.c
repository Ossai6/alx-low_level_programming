#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: String
 * Return: Returns an integer
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}
