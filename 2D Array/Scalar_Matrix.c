#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];

    // Input Matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int flag = 1;

    // 1. Check if Square Matrix
    if (row != col)
    {
        flag = 0;
    }

    // 2. Check Scalar Matrix Conditions
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                // Diagonal elements must be equal to a[0][0]
                if (a[i][j] != a[0][0])
                {
                    flag = 0;
                }
            }
            else if (a[i][j] != 0)
            {
                // Non-diagonal elements must be 0
                flag = 0;
            }
        }
    }

    // Output Result
    if (flag == 1)
    {
        printf("Scalar Matrix\n");
    }
    else
    {
        printf("Not Scalar Matrix\n");
    }

    return 0;
}

// Scalar Matrix হতে হলে দুটি প্রধান শর্ত পূরণ করতে হয়:
// ১. Primary Diagonal-এর বাইরের সব এলিমেন্ট অবশ্যই
// 0 (Zero) হতে হবে।
// ২. Primary Diagonal-এর প্রতিটি এলিমেন্ট সমান (Equal) হতে হবে।