#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *ptr;
    int n;

    ptr = (int *)malloc(3 * sizeof(int));

    printf("\n");

    printf("Employee 1\n");

    printf("Enter no. of characters in your ID : ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        printf("%d = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    printf("Data of Employee 1\n");

    for (int i = 1; i < n+1; i++)
    {
        printf("%d = %d\n", i, ptr[i]);
    }

    printf("\n");

    printf("Employee 2\n");

    printf("Enter no. of characters in your ID : ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        printf("%d = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    printf("Data of Employee 2\n");

    for (int i = 1; i < n+1; i++)
    {
        printf("%d = %d\n", i, ptr[i]);
    }

    printf("\n");

    printf("Employee 3\n");

    printf("Enter no. of characters in your ID : ");
    scanf("%d", &n);

    for (int i = 1; i < n+1; i++)
    {
        printf("%d = ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\n");

    printf("Data of Employee 3\n");

    for (int i = 1; i < n+1; i++)
    {
        printf("%d = %d\n", i, ptr[i]);
    }

    return 0;
}