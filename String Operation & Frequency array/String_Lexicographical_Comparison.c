#include <stdio.h>
#include <string.h>
int main()
{
    char a[] = "Apple";
    char b[] = "Apply";

    int comparison = strcmp(a, b);
    printf("%d", comparison);

    return 0;
}