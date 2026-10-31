#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter Numbers of Rows: ");
    scanf("%d", &row);

    printf("Enter Number of Columns: ");
    scanf("%d", &col);

    int a[row][col];
    printf("Enter Matrix Number:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Reverse Mirror:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}