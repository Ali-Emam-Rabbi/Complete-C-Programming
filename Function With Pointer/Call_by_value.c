#include <stdio.h>

void fun(int x)
{
    x = 100;
    // printf("Fun X Adress = %p\n", &x);
}
int main()
{
    int x = 10;
    // printf("Main X Adress = %p\n", &x);
    fun(x);
    printf("Main er value = %d\n", x);
    return 0;
}