#include <stdio.h>
#include <stdlib.h>

int check(char ptr1[], char ptr2[], int a)
{
    for (int i = 0; i < a; i++)
    {
        if (ptr1[i] == ptr2[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    char *ptr1;
    char *ptr2;
    int a;

    printf("How many deget is there ");
    scanf("%d", &a);
    getchar();

    ptr1 = (char *)malloc(a * sizeof(char));
    ptr2 = (char *)malloc(a * sizeof(char));

    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d deget : ", i + 1);
        scanf("%c", &ptr1[i]);
        getchar();
    }

    printf("\n");

    for (int i = 0; i < a; i++)
    {
        printf("%c", ptr1[i]);
    }
    printf("\n");

    for (int j = 0; j < a; j++)
    {
        ptr2[j] = ptr1[a - 1 - j];
        printf("%c", ptr2[j]);
    }
    printf("\n");

    if (check(ptr1, ptr2, a) == 1)
    {
        printf("The number is Palindrome");
    }
    else
    {
        printf("The numder is not Palindrome");
    }

    return 0;
}