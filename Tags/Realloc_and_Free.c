#include <stdio.h>
#include <stdlib.h>

int main()
{
    //realloc

    int *ptr;
    int n, m;

    printf("Enter the value of array ");
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, ptr[i]);
    }

    printf("\n New \n");

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("%d = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d = %d\n", i, ptr[i]);
    }

    free(ptr); //Free

    return 0;
}