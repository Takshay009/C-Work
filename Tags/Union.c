#include <stdio.h>
#include <string.h>

union Student
{
    int std;
    int Rollno;
    char name[55];
};

int main()
{    
    union Student Manthan,Tashay;    

    Manthan.std = 10;
    Manthan.Rollno = 1;
    strcpy(Manthan.name, "Manthan");

    Tashay.std = 11;    
    Tashay.Rollno = 2;    
    strcpy(Tashay.name, "Tashay");

    printf("std of %d\n", Manthan.std);
    printf("Roll no. %d\n", Manthan.Rollno);
    printf("name is %s\n", Manthan.name);

    return 0;
}