#include <stdio.h>
int main()
{
    int row1, col1, row2, col2, i, j, mat1[10][10], mat2[10][10];
    printf("\n\nEnter your first matrix order:- \n");
    printf("Row of matrix first:- ");
    scanf("%d", &row1);
    printf("Column of matrix first:- ");
    scanf("%d", &col1);
    printf("\n\nEnter your second matrix order:- \n");
    printf("Row of matrix second:- ");
    scanf("%d", &row2);
    printf("Column of matrix second:- ");
    scanf("%d", &col2);
    if (col1 == row1)
    {
        printf("*****Matrix Multiplication is possible*****");
        printf("\n\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {
                printf("Enter your %d%d enlement of first matrix:-", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }
        printf("\n\nYour Entered matrix one is as following:-\n\n");
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col1; j++)
            {

                printf("%d  ", mat1[i][j]);
            }
            printf("\n\n");
        }
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {
                printf("Enter your %d%d enlement of secound matrix:-", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }
        printf("\n\nYour Entered matrix two is as following:-\n\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < col2; j++)
            {

                printf("%d  ", mat2[i][j]);
            }
            printf("\n\n");
        }
        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < col2; j++)
            {
                a[i][j]=mat1[i][j]*mat2[j][i];
            }
        }
    }
    else
    {
        printf("\n\n*****Matrix Multiplication is not possible*****\n\n");
    }
    return 0;
}
