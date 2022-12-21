#include "main.h"

/**
 * _strcat - Concatinates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Returns the string dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, len, count1 = 0, len1;
	int i, j;

	while (dest[i] != '\0')
        {
                count++;
                i++;
        }
	len = count;
	while (src[i] != '\0')
        {
                count1++;
                j++;
        }
        len1 = count1;
	for (i = 0; i <= len1; i++)
	{
		dest[len + i] = src[i];
	}
	return (*dest);
}
