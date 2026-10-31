#include <stdio.h>
void run(int i)
{
    if (i == 0)
        return;
    printf("%d ", i);
    run(i - 1);
}
int main()
{
    run(5);
    return 0;
}