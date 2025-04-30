#include <stdio.h>
#include <conio.h>

int main()
{
    char a[99];
    int Maths,Sci,SS,Eng,Guj,Hindi;

    printf("Enter your name\n");
    gets(a);

    printf("Enter your Sci marks\n");
    scanf("%d",&Sci);

    printf("Enter your Maths marks\n");
    scanf("%d",&Maths);

    printf("Enter your SS marks\n");
    scanf("%d",&SS);

    printf("Enter your Eng marks\n");
    scanf("%d",&Eng);

    printf("Enter your Guj marks\n");
    scanf("%d",&Guj);

    printf("Enter your Hindi marks\n");
    scanf("%d",&Hindi);

    int total = Maths+Sci+SS+Eng+Guj+Hindi;

    printf("Your name is %s\n",a);
    printf("Total marks out of 600 is %d\n",total);
    printf("Percentage is %d",total*100/600);

    return 0;
}