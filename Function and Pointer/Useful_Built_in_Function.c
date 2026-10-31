#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    // int a, b;
    // scanf("%d %d", &a, &b);
    // int ans = pow(a * 1.0, b * 1.0);
    // printf("%d", ans);

    int a;
    scanf("%d", &a);
    int ans = abs(a);
    printf("%d", ans);

    return 0;
}

// // ei ghulo math.h built in fuction
// 1. Ceil er kaj hosse huporer mane next value neya
// example : input : 3.4 > 4 but 3.0 >3 point er pore 1 o barle next value nibe

// 2.floor er kaj hosse all time point er nicher value nibe but equal thakle oitai
// example : input : 3.5 > 3 / 3.0 >3 / 3 > 3

// 3.Round er kaj 3.5 hole ba er hupore ceil korbe 3.4 hole ba niche tahole floor korbe

// 4.sqrt (squre er rootover kaj) 25 dile er squre 5 , 16 dile 4 eemon

// 5.pow (power) er kaj 2 ta value niye tar power ber kora like 5 2 > 25 (squre er moton)
// (a * 1.0, b * 1.0); int niye floot ar moton

// 6.abs postitive ke positive r negative ke positive kore - 1> 1