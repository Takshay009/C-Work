#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

    for (int i = 0; i < argc; i++)
    {
        printf("%d and %s \n", argc, argv[i]);
    }
    int a, b;
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    printf("add %d", a + b);

    return 0;
}
