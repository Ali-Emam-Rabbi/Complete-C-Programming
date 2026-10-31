#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    printf("Value = %d\n", x); // x এর মান প্রিন্ট করছি।
    printf("Address = %p\n", &x);
    printf("Address Of Y = %p", &y); // x ভেরিয়েবলটি মেমরিতে কোন এড্রেসে সেইভ আছে তা প্রিন্ট করছি।
}