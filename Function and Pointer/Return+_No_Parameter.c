#include <stdio.h>
int sum()
{
    int a, b;
    scanf("%d %d", &a, &b); // value patate parbo na main a tai ekane input niye nilam.
    int s = a + b;          // karon eita no parameter.
    return s;
}
int main()
{
    int s = sum();
    printf("%d", s);
    return 0;
}

// ১. বাস্তব জীবনের উদাহরণ
// মনে করুন, আপনি দোকানদারকে গিয়ে শুধু বললেন, "আমাকে এক লিটার tel দিন"
// (আপনি তাকে বাইরে থেকে কোনো পাত্র বা উপাদান দেননি, অর্থাৎ parameter নাই)।
// কিন্তু দোকানদার আপনাকে ১ লিটার tel মেপে ফেরত দিল (অর্থাৎ return আছে)।

// int main()
// {

//     printf("%d", sum());// r ekta int s na niye o print kora jabe..
//     return 0;
// }