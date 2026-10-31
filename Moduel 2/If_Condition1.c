#include<stdio.h>
int main()
{
    int mark;

    printf("ENTER YOUR MARK: ");
    scanf("%d",&mark);

    if (mark >= 33)
    {
        printf("You are Pass\n");
    }
    else
    {
        printf("you are fail\n");
    }

    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int Mark;
//     printf("Enter Your Mark : ");
//     scanf("%d",&Mark);

//     if (Mark>=50)
//     {
//         printf("Grade : C ");
//     }
//     else if (Mark>=70)
//     {
//         printf("Grade : B");
//     }
//     else if (Mark>=80)
//     {
//         printf("Grade : A ");
//     }
//     else if (Mark>=90)
//     {
//          printf("Grade : A+");
//     }

//     else
//     {
//         printf(" fail ");
//     }


//     return 0;
// }


// >= → minimum

// <= → maximum

// == → exact match

// != → not this