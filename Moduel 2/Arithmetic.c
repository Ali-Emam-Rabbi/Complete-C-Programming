#include <stdio.h>

int main()
{
    int a = 5, b = 50;

    int sum = a + b;
    int minus = b - a;
    int mp = a * b;
    float did = (float)a / b;
     //float did = a*0.1/b; ei vabe dile o hobe.
     
     int mod = a%b;

    printf("%d\n%d\n%d\n%.3f\n%d", sum, minus, mp, did, mod);

    return 0;
}

// short 
// #include <stdio.h>

// int main()
// {
//     int a = 5, b = 50;

//     printf("%d\n%d\n%d\n%.3f\n%d",
//            a+b, b-a, a*b, (float)a/b, a%b);

//     return 0;
// }
