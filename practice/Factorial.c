#include <stdio.h>

int Factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }

    else 
    {
        return (num * Factorial(num - 1));
    }
}

int main()
{
    int a;
    printf("Enter the number you want factorial of ");
    scanf("%d",&a);

    printf("The factorial of %d is %d\n",a,Factorial(a));

    return 0;
}
