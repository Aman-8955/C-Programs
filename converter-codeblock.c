#include<stdio.h>

void main()
{
    int a,i,b=0,val;
    for ( i = 1; b<1; i++)
    {
    printf("1.KG TO GRAMS\n 2.FOOT TO INCH\n 3.EXIT\n");
    printf("Enter Your Number:- ");
    scanf("%d",&a);

        if(a==1)
        {
            printf("Enter Your Value:-");
            scanf("%d",&val);
            printf("Answer=%d",val*1000);
        }
        else if(a==2)
        {
            printf("Enter Your Value:-");
            scanf("%d",&val);
            printf("Answer=%d",val*12);
        }
        else if(a==3)
        {
            printf("\nExit....");
            b++;
        }
    }

}
