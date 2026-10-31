#include <stdio.h>
#include <string.h>
int main()
{
    char a[1001], b[1001];
    scanf("%s %s", a, b);

    int lena = strlen(a);
    int lenb = strlen(b);

    printf("%d %d\n", lena, lenb);
    printf("%s %s", a, b);

    return 0;
}

// codeforce er ekta problem solved..