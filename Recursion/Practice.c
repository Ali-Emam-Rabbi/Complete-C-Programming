#include <stdio.h>
void run(int a[], int s, int i)
{
    if (i == s)
    {
        return;
    }
    printf("%d ", a[i]);
    run(a, s, i + 1);
}
int main()
{
    int n;
    printf("Enter Numbers:");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d Numbers:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    run(a, n, 0);
    return 0;
}