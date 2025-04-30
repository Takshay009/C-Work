#include <stdio.h>

/* Mutiplication Table */

int main()
{
    int a, index = 0;

    printf("Enter a number you want Mutiplication Table of ");
    scanf("%d", &a);

    do
    {
        index = index + 1;
        printf("%d X %d = %d\n", a, index, a * index);

    } while (index < 10);

    return 0;
}
