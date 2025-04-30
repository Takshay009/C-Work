#include <stdio.h>

int main()
{
    int num, originalNum, r, arm = 0;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)
    {
        // remainder contains the last digit
        r = originalNum % 10;

        arm += r * r * r;

        // removing last digit from the orignal number
        originalNum /= 10;
    }

    if (arm == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
