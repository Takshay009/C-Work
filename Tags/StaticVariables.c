#include<stdio.h>

int Add(int a)
{
    static int b = 2;
    b++;
    printf("%d\n",b);

    return a + b;
}
    
int main()
{
    int a;

    for (int i = 0; i < 10; i++)
    {
        Add(a);
    }
    
    
    return 0;
}