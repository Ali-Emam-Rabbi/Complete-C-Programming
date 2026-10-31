#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a, max;
    scanf("%d", &max);        

    for(int i = 2; i <= n; i++)
    {
        scanf("%d", &a);      
        if(a > max)           
        {
            max = a;         
        }
    }

    printf("%d\n", max);
    return 0;
}