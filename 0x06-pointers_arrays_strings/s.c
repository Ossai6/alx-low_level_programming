#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, count=0, len;
	char dest[9]="AkpeCaleb";

	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
        len = count;

	printf("%d\n", len);
}
