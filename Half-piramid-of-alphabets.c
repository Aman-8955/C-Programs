#include<stdio.h>
int main()
{
    int i,j,row,k;
    printf("Enter your row Number:- ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for ( j = 1,k=65; j <= i; j++,k++)
        {
            printf("%c",k);
        }
        printf("\n");
    }
    return 0;
}
