#include<stdio.h>
int main()
{
    int a = 1234567890;
    long long int b = 123456789001234;
    float c = 2.1234567;
    double s = 5.123456789012345;
    printf("%d\n%lld%\n%0.7f\n%0.15lf",a,b,c,s);

    return 0;
}
