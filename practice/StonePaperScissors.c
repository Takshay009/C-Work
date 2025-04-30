#include <stdio.h>3
#include <time.h>
#include <stdlib.h>
#include <string.h>

int a = 0, b = 0;

int Random()
{
    srand(time(NULL));
    return rand() % 2;
}

int CPU(int n)
{
    switch (n)
    {
    case 0:
        printf("Paper\n");
        break;

    case 1:
        printf("Stone\n");
        break;

    case 2:
        printf("Scissor\n");
        break;
    }
    return 0;
}

int WinCheck(int n, int m, char name[99])
{
    if (n == m)
    {
        printf("Draw\n");
    }
    else if (n == 0 && m == 1)
    {
        printf("%s Win\n", name);
        a = a + 1;
    }
    else if (n == 1 && m == 0)
    {
        printf("CPU Win\n");
        b = b + 1;
    }
    else if (n == 1 && m == 2)
    {
        printf("%s Win\n", name);  
        a = a + 1;
    }
    else if (n == 2 && m == 1)
    {
        printf("CPU Win\n");
        b = b + 1;
    }
    else if (n == 2 && m == 0)
    {
        printf("%s Win\n", name);
        a = a + 1;
    }
    else if (n == 0 && m == 2)
    {
        printf("CPU Win\n");
        b = b + 1;
    }
}

int main()
{
    int choice, num = 0, n;
    char name[99];

    printf("Enter your name :");
    gets(name);
    printf("\n");

    while (num < 3)
    {
        num++;
        printf("   Round %d\n\n", num);

        printf("0. for paper\n1. for rock\n2. for scissor\n");
        printf("Your choice is ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            n = Random();
            printf("Paper vs ");
            CPU(n);
            WinCheck(choice, n, name);
            break;
        case 1:
            n = Random();
            printf("Stone vs ");
            CPU(n);
            WinCheck(choice, n, name);
            break;
        case 2:
            n = Random();
            printf("Scissor vs ");
            CPU(n);
            WinCheck(choice, n, name);
            break;

        default:
            break;
        }
        printf("\n");
    }

    if (a > b)
    {
        printf("%s Win the Game", name);
    }
    else if (a < b)
    {
        printf("Computer Win the Game");
    }
    else if (a = b)
    {
        printf("Game Draw");
    }

    scanf("%d", a);

    return 0;
}