#include <stdio.h>
#include <string.h>

int main()
{
    FILE *a = NULL;
    char string[100];

    // a = fopen("TEXT.txt","r");
    // fscanf(a,"%s",string);
    // printf("%s",string);
    char c;
    // while ((c = getchar()) != EOF)
    // {
    //     getc(a);
    // }

    a = fopen("TEXT.txt", "r");
    while ((c = getc(a)) != EOF)
    {
        putchar(c);
    }

    // fscanf(a, string);
    // printf("%s",string);

    return 0;
}