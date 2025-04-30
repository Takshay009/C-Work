#include<stdio.h>

int sum(int a, int b);
int sum(int a, int b)
{
    return a + b;
}

void Print_Star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

int TakeTheNumber()
{
    int n;
    printf("Enter the Number ");
    scanf("%d",&n);
    return n;
}

int main()
{
    int a, b, c;
    a = 12;
    b = 43;
    // c = TakeTheNumber() ;

   printf("%d",sum(5,6)) ;
    // printf("%d\n",c);

    //Print_Star(8);

    
    return 0;
}



