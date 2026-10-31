#include <stdio.h>
void run(int a[], int size, int i)
{
    if (i == size)
    {
        return;
    }
    printf("%d ", a[i]);
    run(a, size, i + 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    run(a, n, 0);
    return 0;
}