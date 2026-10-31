#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 12)
    {
        printf("Child");
    }
    else if (age>=18)
    {
        printf("Adult");
    }
    else
    {
        printf("Not a Child");
    }

    return 0;
}

// #include<stdio.h>
// int main ()
// {
//     int num ;
//     printf("Enter Your Number : ");
//     scanf("%d",&num);

//     if (num<=100)
//     {
//         printf("Valid Number");
//     }
//     else
//     {
//         printf("Invalid Number");
//     }

//     return 0;
// }

// >= → minimum

// <= → maximum

// == → exact match

// != → not this
