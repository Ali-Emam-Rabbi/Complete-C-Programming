#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int digit = x/1000;
    if(digit%2==0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");

    }
    return 0;
}

//Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".
//For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.