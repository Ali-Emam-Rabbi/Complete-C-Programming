#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int comparison = strcmp(a, b);

    if (comparison == 0)
    {
        printf("Equal");
    }
    else if (comparison < 0)
    {
        printf("First String is Smaller");
    }
    else
    {
        printf("First String is Greater");
    }

    return 0;
}