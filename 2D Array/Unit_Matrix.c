#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }
            }
            else if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Unit Matrix\n");
    }
    else
    {
        printf("Not Unit Matrix\n");
    }
    return 0;
}

// Scalar Matrix-এ: ডায়াগোনালের মান যেকোনো সমান সংখ্যা হতে পারে
//(a[i][j] != a[0][0] দিয়ে চেক করেছ)।
// Unit Matrix-এ: ডায়াগোনালের মান অবশ্যই নির্দিষ্টভাবে ১ ($1$) হতে হবে
//(তাই a[i][j] != 1 দিয়ে চেক করা হয়েছে)।v