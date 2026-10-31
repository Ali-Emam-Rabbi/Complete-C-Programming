#include <stdio.h>
void run()
{
    printf("Fun\n");
    run();
}
int main()
{
    run();
    return 0;
}

/// fun nije ke call korche tai infinite loop cholchee...