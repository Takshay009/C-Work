#include <stdio.h>

int main()
{
    int i;
    printf(" 1.Convert kms to miles \n 2.Convert inches to foot \n 3.Convert foot to inches \n 4.Convert pound to kgs \n 5.Convert inches to meter \n ");
    printf("Enter choice:\n");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
    {
        float a;
        printf("Enter Km:\n"); // km to miles
        scanf("%f", &a);
        printf("%f km to miles is %f", a, a * 0.62);
        break;
    }
    case 2:
    {
        float a;
        printf("Enter Inches:\n"); // Inches to foot
        scanf("%f", &a);
        printf("%f Inches to  Foot is %f", a, a * 0.08);
        break;
    }
    case 3:
    {
        float a;
        printf("Enter Foot:\n"); // Foot to inches
        scanf("%f", &a);
        printf("%f Foot to inches is %f", a, a * 12);
        break;
    }
    case 4:
    {
        float a;
        printf("Enter Pounds:\n"); // Pounds to  kg
        scanf("%f", &a);
        printf("%f Pounds to  kg is %f", a, a * 0.45);
        break;
    }
    case 5:
    {
        float a;
        printf("Enter Inches :\n"); // Inches  to meters
        scanf("%f", &a);
        printf("%f Inches  to meters is %f", a, a * 0.02);
        break;
    }

    default:
        printf("Wrong choice Entered");
        break;
    }

    return 0;
}
