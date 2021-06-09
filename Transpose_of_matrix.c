#include<stdio.h>
int main()
{    int row,col,i,j;
     int mat[10][10],tmat[10][10];
     printf("\n\nEnter your first matrix order(m*n):- ");
     scanf("%d%d", &row,&col);
             printf("\n\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("Enter your %d%d enlement of first matrix:-", i, j);
                scanf("%d", &mat[i][j]);
            }
        }
        printf("\n\nYour Entered matrix one is as following:-\n\n");
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {

                printf("%d  ", mat[i][j]);
            }
            printf("\n\n");
        }
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
               tmat[j][i]=mat[i][j];
            }
        } 
        printf("\n\nYour Transpose of matrix is as following:-\n\n");
        for (i = 0; i < col; i++)
        {
            for (j = 0; j < row; j++)
            {

                printf("%d  ", tmat[i][j]);
            }
            printf("\n\n");
        }

    return 0;
}
