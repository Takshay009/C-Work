#include <stdio.h>

int fib_r(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    else
    {
        return fib_r(n - 1) + fib_r(n - 2);
    }
}

int fib_i(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; 
        a = b - a; 
    }

    return a;
}


int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    printf("1st method i %d \n", fib_i(num));
    printf("2st method r %d \n", fib_r(num));
    
    return 0;
}
