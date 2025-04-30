#include<stdio.h>
    
int main()
{
    char a[] = {1,2,3,4,5,6,7};

    for (int i = 0; i < 7; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");

    for (int j = 1; j < 8; j++)
    {
        printf("%d",a[ 7 - j ]);
    }
    
    

    return 0;
}