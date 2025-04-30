#include <stdio.h>

int main()
{
    int a = 12;
    int *ptr_1 = &a;
    int *ptr_2 = NULL;

    /*

    printf("The add. of pointer is %p\n", &ptr_1);
    printf("The add. of a is %p\n", &a);
    printf("The add. of a is %p\n", ptr_1);
    printf("The value of a is %d\n", *ptr_1);
    printf("The value of a is %d\n\n", a);
    printf("The add. of garbage is %p\n", &ptr_2);

    */

    int arr[] = {1, 2, 3, 4, 5, 6};
    printf("Add. %d\n", &arr[0]);
    printf("Add. %d\n", arr);
    printf("Add. %d\n", &arr[1]);
    printf("Add. %d\n\n", arr + 1);

    printf("Value. %d\n", *(&arr[0]));
    printf("Value. %d\n", *(arr));
    printf("Value. %d\n", arr[0]);
    printf("Value. %d\n", *(&arr[1]));
    printf("Value. %d\n", *(arr + 1));
    printf("Value. %d\n", arr[1]);

    int x = 42;
    int *ptr = &x; // Assign the address of 'x' to 'ptr'
    int **ptr2 = &ptr;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x); // Use %p to print memory address
    *ptr = 100;
    printf("Value pointed to by 'ptr': %d\n", **ptr2);

    return 0;
}
