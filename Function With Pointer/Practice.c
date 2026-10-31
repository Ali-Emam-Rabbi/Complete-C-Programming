// #include <stdio.h>
// int main()
// {
//     int a = 100;
//     int *pt = &a;
//     printf("A er Address: %p\n", &a);
//     printf("p er Value: %p\n", pt);
//     printf("p er Address: %p\n", &pt);
//     return 0;
// }

// #include <stdio.h>
// void fun(int x)
// {
//     x = 200;
//     printf("Fun X er address %p\n", &x);
//     printf("Fun X er Value %d\n", x);
// }
// int main()
// {
//     int x = 10;
//     fun(x);
//     x = 100;
//     printf("Main X er address %p\n", &x);
//     printf("Main X er Value %d\n", x);
//     return 0;
// }

// // Call by Value

#include <stdio.h>

void fun(int *a)
{
    // *a = 100;
    printf("a er value %p\n", a);
}
int main()
{
    int x = 10;
    printf("Main X er Address %p\n", &x);
    fun(&x);
    // printf("%d\n", x);
    return 0;
}