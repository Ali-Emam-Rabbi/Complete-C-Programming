#include <stdio.h>
int main()
{
    int taka;
   printf("Enter :");
    scanf("%d",&taka);

    if(taka>=5000)
    {
        printf("Dhaka Jabo\n");
        if(taka>=10000)
        {
            printf("Saint Martin Jabo\n");
        }
        else
        {
            printf("Back Chole Ashbo\n");
        }
    }
    else
    {
        printf("Jabo na\n ");
    }


    return 0;
}