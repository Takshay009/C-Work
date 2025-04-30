#include <stdio.h>
#include <string.h>

struct Detail
{
    int LicenseNo;
    char route[300];
    int km;
    char name[100];

} first, Second, Third;

int main()
{
    printf("First Driver\n");
    printf("Enter your name\n");
    scanf("%s", &first.name);
    printf("Enter your License No \n");
    scanf("%d", &first.LicenseNo);
    printf("You many km you have drive \n");
    scanf("%d", &first.km);
    printf("Enter your route :\n");
    scanf("%s", &first.route);

    printf("Second Driver\n");
    printf("Enter your name \n");
    scanf("%s", &Second.name);
    printf("Enter your License No \n");
    scanf("%d", &Second.LicenseNo);
    printf("You many km you have drive \n");
    scanf("%d", &Second.km);
    printf("Enter your route :\n");
    scanf("%s", &Second.route);

    printf("Third Driver\n");
    printf("Enter your name \n");
    scanf("%s", &Third.name);
    printf("Enter your License No \n");
    scanf("%d", &Third.LicenseNo);
    printf("You many km you have drive \n");
    scanf("%d", &Third.km);
    printf("Enter your route :\n");
    scanf("%s", &Third.route);

    printf("\n");
    printf("First Driver\n");
    printf("\n");
    printf("name : %s\n", first.name);
    printf("Driver License No : %d\n", first.LicenseNo);
    printf("Km drived : %d\n", first.km);
    printf("This route : %s\n", first.route);

    printf("\n");
    printf("Second Driver\n");
    printf("\n");
    printf("name : %s\n", Second.name);
    printf("Driver License No : %d\n", Second.LicenseNo);
    printf("Km drived : %d\n", Second.km);
    printf("This route : %s\n", Second.route);

    printf("\n");
    printf("Third Driver\n");
    printf("\n");
    printf("name : %s\n", Third.name);
    printf("Driver License No : %d\n", Third.LicenseNo);
    printf("Km drived : %d\n", Third.km);
    printf("This route : %s\n", Third.route);

    return 0;
}