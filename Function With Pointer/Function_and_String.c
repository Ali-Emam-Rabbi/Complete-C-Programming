#include <stdio.h>
#include <string.h>
void funs(char *a)
{
    printf("%d\n", strlen(a));
}
int main()
{
    char a[20] = "Hello";
    funs(a);
    return 0;
}