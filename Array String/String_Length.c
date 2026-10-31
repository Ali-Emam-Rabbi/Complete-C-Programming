#include <stdio.h>
#include <string.h>
int main()
{
    char f[100];
    printf("Enter Your Full Name:");
    fgets(f, sizeof(f), stdin);

    f[strlen(f) - 1] = '\0';

    int st = strlen(f);

    printf("Length : %d\n %s", st, f);

    return 0;
}

// length ber korbar jonno jodi space shoho ber korte hoi
//  (like Ali Emam Rabbi ) tahole fgets use korte hobe input a
//  kintu ekta jinish mone rakhte hobe fgets a use korar por
//  extra mane 1 ta beshi lenght dibe ei jonnn beshi jeno na dei
//  f[strlen(f)-1='\0']; use korte hobe..
//  r jodi space bhade like (only > Ali) tahole scanf use
