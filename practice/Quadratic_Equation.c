#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,d,x,y,root;

    printf("Enter the value of a ");  // get the value of a from user
    scanf("%f",&a);

    printf("Enter the value of b ");  // get the value of b from user
    scanf("%f",&b);

    printf("Enter the value of c ");  // get the value of c from user
    scanf("%f",&c);

    d = b*b-4*a*c; // formula for finding D

    printf("The value of D is %f\n",d);
                       
    if (d < 0)  // cheaking D is negative or not
    {
        printf("The D is in Negative\n");
        printf("D < 0, No Real is possible\n");
    }

    if (d >= 0)
    {
        root = sqrt(d); 

        x = -b +root /2*a;  // formula for finding X
        y = -b -root /2*a;

        printf("The value of X is %f\n",x);
        printf("The value of X is %f\n",y);
        printf("D > 0,Real & Distict roots\n");
    }

    if (d = 0)
    {
        printf("D = 0 Real & Equal roots\n");
    }

    scanf("%f",&root);
                        
    return 0;
}
