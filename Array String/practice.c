#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    printf("Enter Full Name :");
    fgets(a, sizeof(a), stdin);

    a[strlen(a) - 1] = '\0';

    int lena = strlen(a);

    printf("Name Length:%d", lena);

    return 0;
}
