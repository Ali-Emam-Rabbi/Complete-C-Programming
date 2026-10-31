#include <stdio.h>
int main()
{
    int n;
    printf("Enter Numbers Of Elements :\n");
    scanf("%d", &n);
    int ar[n];

    printf("Enter %d Elements :\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int i = 0, j = n - 1;

    while (i < j)
    {
        int tmp = ar[i];
        ar[i] = ar[j];
        ar[j] = tmp;

        i++;
        j--;
    }
    printf("Swap Array :\n");

    for (i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}