#include <stdio.h>
int main()
{
    char a[4] = "abc\0"; // back slash 0 na dile sesh bujano
    // jabe na, nai output extra ashbe + shate 1 ta char add
    // dite hobe // oh r ekta back slash 0 hosse Null toh \0
    // na dile o hobe jodi ami ekta char barai diy like char 3
    // char 4 karon jaiga dite hobe tahole ekai \0boshai nibe.
    int sz = sizeof(a) / sizeof(char);
    printf("%d\n", sz);
    printf("%s", a); // loop bhade print korte chaile eemon.

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%c ", a[i]);
    // }

    return 0;
}