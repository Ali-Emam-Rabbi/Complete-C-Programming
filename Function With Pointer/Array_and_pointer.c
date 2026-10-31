#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    printf("0 Index Address : %p\n", &a[0]);
    printf("a er address : %p\n", &a);
    printf("1st value : %d\n", *a);       //*a pointer a / mane a[0]
    printf("2nd value : %d\n", *(a + 1)); // a[1] > *(a+1)
    return 0;
}