#include<stdio.h>
#include<string.h>
    
int main()
{
    FILE * a = NULL;
    char name[99];
    char item[99];
    char outlet[99];

    printf("Enter your name ");
    gets(name); 

    printf("Enter your item name ");
    gets(item); 

    printf("Enter your outlet name ");
    gets(outlet);    

    a = fopen("Myfile.txt","w+");
    fprintf(a,"Thanks %s for purchasing %s from our outlet %s.\n",name,item,outlet);
    fprintf(a,"Please visit our outlet %s for any kind of problems. We plan to server you again soon.",outlet);

    fclose(a);
    
    return 0;
}