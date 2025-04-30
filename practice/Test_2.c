#include <stdio.h>

int main()
{
    int pass;
    
    printf("How many Exam you had pass ");
    scanf("%d",&pass);

    if (pass < 2)
    {
        printf("You will get RS 15");
    }

    else if (pass > 1)
    {
        printf("You will get RS 45");
    }
  

    return 0;
}
