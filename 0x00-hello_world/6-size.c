#include <stdio.h>

/** main - A program that prints size of int, char, long int, long long int, float data types
 * Return: Always return 0
 */
int main(void)
{
	char Char;
	int Int;
	long int LongInt;
	long long int LongLongInt;
	float Float;

	printf("Size of char: %zu byte(s)\n", sizeof(Char));
	printf("Size of int: %zu byte(s)\n", sizeof(Int));
	printf("Size of long int: %zu byte(s)\n", sizeof(LongInt));
	printf("Size of long long int: %zu byte(s)\n", sizeof(LongLongInt));
	printf("Size of float: %zu byte(s)\n", sizeof(Float));

	return (0);	
}
