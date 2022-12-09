#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assign a random number
 * Return: Always return 0
*/
int main(void)
{
	int n;
	int w;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	scanf("%d", &n);
	w = n % 10;
	printf("Last digit of %d is %d ", n, w);
	if (w > 5)
	{
		printf("and is greater than 5\n");
	}
	if (w == 0)
	{
		printf("and is 0\n");
	}
	if (w < 6 && w != 0)
	{
		printf("and is less than 6 and not 0\n");
	}


	return (0);
}
