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

    int position;

    printf("Enter Position :\n");
    scanf("%d", &position);

    for (int i = position; i < n - 1; i++)
    {
        ar[i] = ar[i + 1];
    }

    printf("New Array After Delete :\n");

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}

// array insert a right shift korte hobe r 2 ta mane positon r value
// nite hobee r shuru korte hobe n+1 diye.. right shift i shuru hobe
// n diye r sesh > diye position -- diyee

// r remove a left shift korte hobe position diye shuru hobe sesh < n-1
// r ekta mane position ekta nite hobe last loop a n-1 hobe