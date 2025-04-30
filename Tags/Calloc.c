#include <stdio.h>
#include <stdlib.h>

int main()
{
    //calloc

    int *ptr;

    int a;
    scanf("%d", &a);

    ptr = (int *)calloc(3, sizeof(int));

    for (int i = 0; i < a; i++)
    {
        printf("%d = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%d = %d\n", i, ptr[i]);
    }

    return 0;
}