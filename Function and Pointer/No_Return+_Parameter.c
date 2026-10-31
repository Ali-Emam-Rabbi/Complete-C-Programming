#include <stdio.h>

void sum(int x, int y)
{
    int s = x + y;
    printf("%d\n", s);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);

    return 0;
}

// void sum(int x, int y)
// {
//     int s = x + y;
//     printf("%d\n", s); // jehetu return korte parbo na tai ekane print korbo.
// } // main a ami value patate parbo na,,nite parbo(parameter)
//   //  tai input main a..

//  sum(a, b); // jehetu value ashbe na tai int s=sum(10,20) s
// er moddhe save kora lagbe na
