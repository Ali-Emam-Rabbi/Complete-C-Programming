#include <stdio.h>
#include <string.h>
int main()
{
    char c;
    scanf("%s", c);
    int cnt[26] = {0};

    for (int i = 0; i < strlen(c); i++)
    {
        int value = c[i] - 'a';
        cnt[value]++;
    }

    for (int i = 0; i < strlen(c); i++)
    {
        int value = c[i] - 97;
        if (cnt[value] != 0)
        {
            printf("%c - %d\n", value, cnt[value])
        }
        cnt[value] = 0;
    }

    return 0;
}

////shikhte hobe aabar frequency array 1 and 2