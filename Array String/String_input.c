#include <stdio.h>
int main()
{
    char a[6];       // null \0 er jonno extra char nite hobe .
    scanf("%s", &a); // loop er maddhome o nite pari bah %s(string)
    // diye o direct loop bhade nite pari.r hosse input a &(and) na
    // dile o hobe kaj korbe.
    printf("%s\n", a);
    return 0;
}