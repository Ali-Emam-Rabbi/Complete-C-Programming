#include <stdio.h>
int main()
{
    int n;
    printf("Enter First Numbers Of Elements :\n");
    scanf("%d", &n);
    int a[n];

    printf("Enter first %d Elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    printf("Enter Second Numbers Of Elements :\n");
    scanf("%d", &m);
    int b[m];

    printf("Enter Second %d Elements :\n", m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    int ans[n + m];
    for (int i = 0; i < n; i++)
    {
        ans[i] = a[i];
    }

    int i = n;
    for (int j = 0; j < m; j++)
    {
        ans[i] = b[j];
        i++;
    }

    for (int i = 0; i < n + m; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}

// eitai first a 2 tar loop chalate hobe 2 ta array niye mane input
// nite hobe tar por ans ber korte hobe ans er input nebar por dhape
// dhape A and B er kaj korte hobe serial by serial

// first > 2 ta array input with loop
// second > ans er condition ans[i]=a[i]; mane A er value shob ans jabe
// with n+m jogfol mane 2 ta array er jogfol
// Third > next A & B er output er jonno kaj korte hobe

// // jani na likhe toh rakhchi pore nije o bujhbo ki na jani na