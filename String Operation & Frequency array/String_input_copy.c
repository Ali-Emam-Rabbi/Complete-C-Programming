#include <stdio.h>
#include <string.h>
int main()
{
    char m[100];
    char z[100];
    printf("Enter String To Copy :");
    fgets(z, sizeof(z), stdin); // with space er jonno neya..

    z[strcspn(z, "\n")] = '\0';
    strcpy(m, z);

    printf("After Copy :%s", m);

    return 0;
}

// fgets এর কারণে শেষে চলে আসা নিউলাইন (\n) রিমুভ করার নিয়ম.
// nai error ashbe jodi o \n show korbe na thik thak e lagbe..