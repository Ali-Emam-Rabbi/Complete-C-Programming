#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    scanf("%s", a);
    int sum = 0;

    for (int i = 0; i < strlen(a); i++)

    {
        sum = sum + (a[i] - '0');
    }
    printf("%d", sum);

    return 0;
}

// length er hupor loop cholche for i<100001 hobe na karon
// shob value ami dibo na input a like 3 ta dila (351 op=9)
// r sum + (a[i]-'0'); - 0 karon 0 er ASCII int value 48
//  48(48 na dile '0') minus korte hobe