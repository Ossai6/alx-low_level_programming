#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if a random number is positive or negative
 * Return: Always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter a number\n");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
