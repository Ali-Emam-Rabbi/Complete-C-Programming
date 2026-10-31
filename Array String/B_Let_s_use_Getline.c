#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000001];
    fgets(a, sizeof(a), stdin);

    for (int i = 0; a[i] != '\\'; i++)
    {
        printf("%c", a[i]);
    }

    return 0;
}

// question chilo joto back slash(//) paowa porjonto print korbe
// tai for loop a  condition er jaigai !='\\' deya hoyeche
// example : input: Egyptian collegiate programming\ contest
// output : Egyptian collegiate programming\