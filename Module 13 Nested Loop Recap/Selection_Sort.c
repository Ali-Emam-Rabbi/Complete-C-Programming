#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tem = a[i];
                a[i] = a[j];
                a[j] = tem;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

// সর্টিং (Sorting) মানে হলো এলোমেলো কিছু সংখ্যাকে ছোট থেকে বড় (Ascending)
// অথবা
//  বড় থেকে ছোট (Descending) সাজানো।
// সিলেকশন সর্ট হলো সংখ্যা সাজানোর সবচেয়ে সহজ একটা উপায়।
