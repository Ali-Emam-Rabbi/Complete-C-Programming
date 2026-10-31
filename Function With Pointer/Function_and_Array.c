#include <stdio.h>
void run(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}
int main()
{
    int a[2] = {10, 20};
    run(a, 2);
    int sz = sizeof(a) / sizeof(int);
    printf("Length of Main Integer :%d\n", sz);
    return 0;
}

/// main kotha hosse function a array nile eitar shate
// bole size o nite hobe r ekta int niye parameter a ...