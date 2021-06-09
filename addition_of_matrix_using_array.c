#include <stdio.h>
void main()
{
    int num,i, j, mat1[10][10], mat2[10][10], addmat[10][10];
    printf("Enter your matrix order:- ");
    scanf("%d",&num);
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("Enter your %d%d enlement of first matrix:-", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Your Entered matrix one is as following:-\n\n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            printf("%d  ", mat1[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            printf("Enter your %d%d enlement of secound matrix:-", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("Your Entered matrix two is as following:-\n\n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            printf("%d  ", mat2[i][j]);
        }
        printf("\n\n");
    }

    printf("Your Addition of matrix is as following:-\n\n");
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {

            printf("%d  ", addmat[i][j] = mat1[i][j] + mat2[i][j]);
        }
        printf("\n\n");
    }
}