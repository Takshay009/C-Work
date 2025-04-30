#include <stdio.h>

int main()
{
    int marks[2][4] = {{23, 34, 53, 12}, {34, 43, 53, 23}};

    /*for (int i = 0; i < 4; i++)
    {
        printf("Enter your marks %d\n",i);
        scanf("%d",&marks[i]);
    }*/

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The %d & %d got marks %d\n", i,j, marks[i]);
        }
    }

    return 0;
}

