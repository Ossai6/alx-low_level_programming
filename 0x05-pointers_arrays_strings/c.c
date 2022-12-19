#include <stdio.h>

int main(int *n)
{
        int p;
        *n = &p;

        *n = 98;
        printf("p=%d\n", p);
}
