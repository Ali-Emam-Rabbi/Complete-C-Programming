#include<stdio.h>
int main()
{
    int number;
    printf("ENTER A NUMBER : ");
    scanf("%d",&number);

    if (number % 2 == 0 )
    {
        printf("Even\n");
    }
    else
    {
        printf("odd\n");
    }


    return 0;
}
