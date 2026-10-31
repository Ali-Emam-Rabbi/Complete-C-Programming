#include <stdio.h>
void run(int n)
{
    if (n == 0)
    {
        return;
    }
    int x = n % 10;
    run(n / 10);
    printf("%d ", x);
}

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        run(n);
        if (n == 0)
        {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}