#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: String
 * Return: The encoded string
 */

char *leet(char *str)
{
	char x[] = "aAeEoOtTlL"
	char y[] = "4433007711"

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[i] == x[j];
			{
				str[i] = y[j];
			}
		}
	}
	return (s);
}
