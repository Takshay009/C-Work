#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Malloc

    int *ptr;

    ptr = (int *)malloc(3 * sizeof(int));
    
    for (int i = 0; i < 4; i++)
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