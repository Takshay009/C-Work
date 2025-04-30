#include <stdio.h>

int main()
{
label:
    printf("We are in label\n");
    goto end;

    goto label;

end:
    printf("We are in End\n");

    return 0;
}
