// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[200];
//     char b[200];

//     scanf("%s %s", a, b);

//     strcat(a, b);

//     printf("%s", b);

//     return 0;
// }

// Bulitin functions diye kora r niche loop chaliye

#include <stdio.h>
#include <string.h>
int main()
{
    char a[200], b[100];
    scanf("%s %s", a, b);

    int c = strlen(a);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[c] = b[i]; // a = johkon length(5 hobe like input world) b tohkon i=0 shuru hobe
        c++;         // length baranor jonno
    }

    printf("%s %s", a, b);

    return 0;
}

// Concatenation অর্থ হলো দুই বা ততোধিক String একসাথে জোড়া লাগানো।

// উদাহরণ:
// a = "Hello"
// b = "World"
// Concatenation করলে:
// HelloWorld