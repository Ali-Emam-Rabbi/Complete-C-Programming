#include <stdio.h>
int fun(char a[], int i)
{
    // বেস কেস: যদি বর্তমান ইনডেক্সে নাল টার্মিনেটর পাওয়া যায়
    if (a[i] == '\0')
        return 0;

    // পরবর্তী ইনডেক্সের জন্য রিকার্সিভ কল করো
    int l = fun(a, i + 1);

    // এই সময় বর্তমান ইনডেক্সের মান + 1 রিটার্ন করো
    return l + 1;
}

int main()
{
    char a[20] = "hello";
    int length = fun(a, 0);
    printf("%d\n", length);
    return 0;
}
