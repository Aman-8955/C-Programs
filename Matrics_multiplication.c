#include <stdio.h>
#include <stdlib.h>
int main()
{
    int firstM, firstN, secondM, secondN, i, j;
    printf("Enter your First matrix order(mxn):- ");
    scanf("%d %d", &firstM, &firstN);
    printf("Enter your Second matrix order(mxn):- ");
    scanf("%d %d", &secondM, &secondN);
    if (firstN != secondM)
    {
        printf("These matrix multiplication is not possible.....");
        exit(0);
    }
    int mat1[firstM][firstN], mat2[secondM][secondN];
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < firstN; j++)
        {
            printf("Enter your %d%d element of first matrix:-", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Your Entered matrix one is as following:-\n\n");
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < firstN; j++)
        {
            printf("%d ", mat1[i][j]);
        }
        printf("\n\n");
    }

    for (i = 0; i < secondM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            printf("Enter your %d%d element of secound matrix:-", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    // Printing second matrix values
    printf("Your Entered matrix two is as following:-\n\n");
    for (i = 0; i < secondM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            printf("%d ", mat2[i][j]);
        }
        printf("\n\n");
    }

    printf("Your Multiplication of matrix is as following:-\n\n");
    // Main Multiplication logic
    int resultmat[firstM][secondN], k, temp, addtemp = 0;
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < secondN; j++, addtemp = 0)
        {
            for (k = 0; k < secondN; k++)
            {
                temp = mat1[i][k] * mat2[k][j];
                addtemp += temp;
            }
            resultmat[i][j] = addtemp;
        }
    }
    // Printing resulted matrix
    for (i = 0; i < firstM; i++)
    {
        for (j = 0; j < secondN; j++)
        {
            printf("%d ", resultmat[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}