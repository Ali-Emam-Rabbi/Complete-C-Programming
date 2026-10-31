#include <stdio.h>
int main()
{
    int n;
    printf("Enter Numbers Of Elements:");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d Elements:", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Sorting Array: ");
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
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