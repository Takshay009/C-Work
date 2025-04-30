#include<stdio.h>

int func1(int arr[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i , arr[i]);
    }

    // arr[0] = 43; This will change the value in main() also
    
    return 0;
}

void func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value of %d is %d\n",i , *ptr + i);
    }
    
}
    
int main()
{
    int arr[4] = {1,2,3,4};

    func2(arr);
    
    return 0;
}