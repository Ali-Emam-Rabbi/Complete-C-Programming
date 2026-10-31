#include <stdio.h>
int main()
{
    double x = 10.6;

    double *ptr = &x;
    // x = 2.40;
    double *ptr2 = ptr;
    x = 1.12;
    printf("%0.2lf\n", x);
    printf("%0.2f\n", *ptr);
    printf("Size Of = %d\n", sizeof(ptr));
    printf("Address Of ptr2 =%p\n", &ptr2);
    printf("Size Of 2 = %d\n", sizeof(ptr2));

    return 0;
}