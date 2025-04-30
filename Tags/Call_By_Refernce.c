#include<stdio.h>

int sawp(int *x , int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
    
int main()
{
    int a = 25 , b = 45;

    printf("%d and %d\n",a,b);

    sawp(&a,&b);

    printf("%d and %d\n",a,b);

    return 0;
}