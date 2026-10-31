#include <stdio.h>
int main()
{
    char a[5];
    printf("Enter Character :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }

    printf("The Character :\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", a[i]);
    }

    return 0;
}