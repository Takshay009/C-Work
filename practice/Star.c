#include <stdio.h>

int main()
{
    int choice;

    char Star = '*';

    printf("1. Trianguler star pattern\n2. Reversed Trianguler star pattern\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Trianguler star pattern\n\n");

        printf("%c\n", Star);
        printf("%c%c\n", Star, Star);
        printf("%c%c%c\n", Star, Star, Star);
        printf("%c%c%c%c\n", Star, Star, Star, Star);
        printf("%c%c%c%c%c\n", Star, Star, Star, Star, Star);

        break;

    case 2:
        printf("Reversed Trianguler star pattern\n\n");

        printf("%c%c%c%c%c\n", Star, Star, Star, Star, Star);
        printf("%c%c%c%c\n", Star, Star, Star, Star);
        printf("%c%c%c\n", Star, Star, Star);
        printf("%c%c\n", Star, Star);
        printf("%c\n", Star);

        break;

    default:
    printf("Wrong Choice");
        break;
    }

    return 0;
}
