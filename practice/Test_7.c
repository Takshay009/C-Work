#include <stdio.h>

int main()
{
    int choice;
    int row1, row2;

    char Star = '*';

    printf("1. Trianguler star pattern\n2. Reversed Trianguler star pattern\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Trianguler star pattern\n");
        scanf("%d", &row1);
        const int a = row1;
        int b = 1;

        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%c", Star);
            }
            if (b < a)
            {
                b++;
            }
            else
            {
                break;
            }

            printf("\n");
        }

        break;

    case 2:
        printf("Reversed Trianguler star pattern\n");
        scanf("%d", &row2);
        int c = row2;

        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%c", Star);
            }
            
            c--;
            printf("\n");
        }

        break;

    default:
        printf("Wrong Choice");
        break;
    }

    return 0;
}
