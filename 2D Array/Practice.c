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
                continue;
            }
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Primary Diagonal\n");
    }
    else
    {
        printf("Not Primary Diagonal\n");
    }
    return 0;
}

// flag =1 diye bujacchi je diagonal r 0 hoosse not
// diagonal er rules hosse row r columns same hote hobe
// example : row 3 columns 3;

//            if (i == j)
//  {
// continue;
// }
// যখন লুপে i এবং j সমান হবে (0,0, 1,1, 2,2),
// প্রোগ্রাম বুঝবে এগুলো মূল ডায়াগোনালের ঘর। তাই continue
// কাজ করবে এবং এদের মান 0 না অন্য কিছু—তা
//  চেকই করবে না।

// if (a[i][j] != 0)
//  flag = 0;
//}
// ডায়াগোনালের বাইরের ঘরে 0 ছাড়া অন্য কিছু থাকলে ফ্ল্যাগ 0 হবে
