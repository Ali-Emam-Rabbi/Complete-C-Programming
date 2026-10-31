#include <stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    x = 200;
    printf("%d\n", x);
    printf("%d\n", *ptr);

    // printf("Address Of X = %p\n", &x);
    // printf("Value Of ptr = %p\n", ptr);
    // printf("Address Of ptr = %p\n", &ptr);
    // printf("Memory Of ptr = %d\n", sizeof(ptr));
    return 0;
}