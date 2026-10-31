#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    printf("Address Of X= %p\nAddress Of P= %p\n", &x, &p);
    printf("%d\n", *p); // de referene er maddhome address er value dekha (x=10 dekha)
    return 0;
}