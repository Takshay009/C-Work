#include <stdio.h>

int main()
{
    int a;

    printf("Enter the number ");
    scanf("%d", &a);

    while (a > 1)
    {
        if (a % 2 == 0)
        {
            a = a / 2;
            printf("%d\n", a);
        }

        else
        {
            a = 3 * a + 1;
            printf("%d\n", a);
        }
    }

    return 0;
}
