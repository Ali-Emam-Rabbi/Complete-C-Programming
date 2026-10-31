#include <stdio.h>
void run(int ar[], int size)
{
    ar[0] = 100;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
}
int main()
{
    int ar[5] = {1, 2, 3, 4, 5};
    run(ar, 5);

    return 0;
}