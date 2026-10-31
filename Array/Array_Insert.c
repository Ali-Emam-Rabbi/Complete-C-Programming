#include <stdio.h>
int main()
{
    int n;
    printf("Enter Numbers Of Elements:\n");
    scanf("%d", &n);
    int ar[n + 1];

    printf("Enter %d ELements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int position, value;

    printf("Enter Position :\n");
    scanf("%d", &position);

    printf("Enter Value To Insert :\n");
    scanf("%d", &value);

    for (int i = n; i > position; i--)
    {
        ar[i] = ar[i - 1];
    }
    ar[position] = value;

    printf("New Array :\n");

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}