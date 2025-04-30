#include <stdio.h>
#include <string.h>

void String(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    //char name[99];    
    //printf("Enter your name\n");    
    //gets(name);    
    //printf("Your name is %s\n\n",name);

    //String Function

    char Str1[] = "Manthan";
    char Str2[] = "Kashay";
    char Str3[34];

    printf("Enter the two name of your friend\n");

    gets(Str1);
    gets(Str2);

    printf("%s is frined of %s\n",Str1,Str2);

    puts(strcat(Str1,Str2));

    //puts(strcat(Str1,Str2));

    //printf("Length is %d\n",strlen(Str1));
    //printf("Reverce string ");
    //puts(strrev(Str1));

    //stricmp(Str3,strcat(Str1,Str2));
    //puts(Str3);

    return 0;
}