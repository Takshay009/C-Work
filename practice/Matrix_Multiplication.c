#include <stdio.h>

int main()
{
    int row1, collum1;
    int row2, collum2;
    int sum = 0;

    printf("Enter the row of 1st matrix ");
    scanf("%d", &row1);

    printf("Enter the collum 1st matrix ");
    scanf("%d", &collum1);

    int a[10][10];
    int b[10][10];
    int ans[10][10];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < collum1; j++)
        {
            printf("The value of %d at %d is ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    printf("Enter the row of 2st matrix ");
    scanf("%d", &row2);

    printf("Enter the collum 2st matrix ");
    scanf("%d", &collum2);

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < collum2; j++)
        {
            printf("The value of %d at %d is ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n");

    if (row1 == collum2 || row2 == collum1)
    {
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < collum2; j++)
            {
                for (int k = 0; k < collum1; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                ans[i][j] = sum;
                sum = 0;
            }
        }
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < collum2; j++)
            {
                printf("%d ", ans[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Matrix cannot be Multiplied");
    }

    return 0;
}