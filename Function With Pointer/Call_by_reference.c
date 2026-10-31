#include <stdio.h>

void fun(int *p)
{
    // printf("Fun er Value - %p\n", p);
    *p = 500;
    // printf("D Reference X Value - %d\n", *p);
}
int main()
{
    int x = 100;
    // printf("Main er address - %p\n", &x);
    fun(&x);
    printf("%d", x);
    return 0;
}