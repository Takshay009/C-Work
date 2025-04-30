#include <stdio.h>

int main()
{
    char i;
    float a;

    while (1)
    {
        printf("Pres q for quit:\n");
        printf(" 1.Convert kms to miles \n 2.Convert inches to foot \n 3.Convert foot to inches \n 4.Convert pound to kgs \n 5.Convert inches to meter \n ");
        printf("Enter choice:\n");
        scanf(" %c", &i);

        switch (i)
        {

        case '1':
        {
            printf("Enter Km:\n"); // km to miles
            scanf("%f", &a);
            printf("%f km to miles is %f\n\n", a, a * 0.62);
            break;
        }
        case '2':
        {
            printf("Enter Inches:\n"); // Inches to foot
            scanf("%f", &a);
            printf("%f Inches to  Foot is %f\n\n", a, a * 0.08);
            break;
        }
        case '3':
        {
            printf("Enter Foot:\n"); // Foot to inches
            scanf("%f", &a);
            printf("%f Foot to inches is %f\n\n", a, a * 12);
            break;
        }
        case '4':
        {
            printf("Enter Pounds:\n"); // Pounds to  kg
            scanf("%f", &a);
            printf("%f Pounds to  kg is %f\n\n", a, a * 0.45);
            break;
        }
        case '5':
        {
            printf("Enter Inches :\n"); // Inches  to meters
            scanf("%f", &a);
            printf("%f Inches  to meters is %f\n\n", a, a * 0.02);
            break;
        }

        case 'q':
        {
            printf("quit\n");
            goto end;
            break;
        }

        default:
            printf("Wrong choice Entered\n");
            break;
        }
    }

    end:

    return 0;
}
