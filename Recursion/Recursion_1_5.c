#include <stdio.h>
void run(int i)
{
    if (i == 6)
        return;
    printf("%d ", i);
    run(i + 1);
}
int main()
{
    run(1);
    return 0;
}

// base case diye recursion thamano hoi
// amar 1 theke 5 porjonto lagbe tai
// if diye 6 hole return korbe..