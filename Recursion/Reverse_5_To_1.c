#include <stdio.h>
void run(int i)
{
    if (i == 6)
    {
        return;
    }
    run(i + 1);
    printf("%d ", i);
}
int main()
{
    run(1);
    return 0;
}

/// recursion ke aage call korle reverse kaj kore baki ta
// shob 1 to 5 print er moton e..