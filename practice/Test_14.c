#include <stdio.h>
#include <math.h>

int Distance(int x1, int x2, int y1, int y2)
{
    return sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));       
}

float ArOfCricle(int R)
{
    return 22/7*pow(R,2);
} 

int main()
{
    int x1, x2, y1, y2, R;

    printf("Enter the value of x1 ");
    scanf("%d", &x1);

    printf("Enter the value of x2 ");
    scanf("%d", &x2);

    printf("Enter the value of y1 ");
    scanf("%d", &y1);

    printf("Enter the value of y2 ");
    scanf("%d", &y2);

    R = Distance(x1, x2, y1, y2);

    printf("Distance = %d\n",R);

    printf("Area of cricle = %f\n",ArOfCricle(R));

    return 0;
}