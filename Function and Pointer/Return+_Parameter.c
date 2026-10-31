#include <stdio.h>

int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    int result = sum(30, 90);
    printf("%d", result);
    return 0;
}

// Rules
// Return_Type Name(Parameter)
// {
//     code
//     Return what value
// }

// Return + Parameter হলো এমন এক ধরণের ফাংশন যা কাজ করার জন্য বাইরে থেকে
// ইনপুট (Parameter) গ্রহণ করে
// এবং কাজ শেষ করে একটি ফলাফল (Return Value) মূল প্রোগ্রামে ফেরত পাঠায়।

// বাস্তব জীবনের জুস মেকারের সাথে এর তুলনা করা যায়—তুমি জুস মেকারে ফল
// (Parameter) দাও, আর সে তোমাকে জুস (Return) দেয়।