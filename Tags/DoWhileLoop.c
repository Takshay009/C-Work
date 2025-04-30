#include <stdio.h>

int main()
{
    int num;
    int index = 0;

    printf("Enter a number ");
    scanf("%d", &num);

    do // do while loop executes at least once
    {
        printf("%d\n", index + 1);
        index = index + 1;

    } while (index < num);

    return 0;
}
