#include <stdio.h>

int main()
{
    int choice;
    int row1, row2;

    printf("1. Trianguler star pattern\n2. Reversed Trianguler star pattern\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Trianguler star pattern\n");
        scanf("%d", &row1);
        
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                printf("*");
            }
            
            printf("\n");
        }
        

        break;

    case 2:
        printf("Reversed Trianguler star pattern\n");
        scanf("%d", &row2);

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < row2 - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }

        break;

    default:
        printf("Wrong Choice");
        break;
    }

    return 0;
}
