#include<stdio.h>

int sum(int a,int b)
{
    return a + b;
}

void Hello(int(*ptr) (int,int))
{
    printf("Hello %d\n",ptr(4,5));
}
    
int main()
{
    printf("%d\n",sum(1,2));

    int(*add) (int,int);
    add = &sum;

    int a = (*add)(5,5);
    printf("%d\n",a);

    Hello(add);
    
    return 0;
}