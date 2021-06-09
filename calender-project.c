/*program is made by aman ali 
its made by use of genral propose 
its a project of calender*/
#include<stdio.h>
void main()
{
    int a,i,j,b=0;
    printf("MON ");
    printf("TUE ");
    printf("WED ");
    printf("THU ");
    printf("FRI ");
    printf("SAT ");
    printf("SUN ");
    printf("\n");
    
    for ( i =1,j=1; i <=35; i++,j++)
    { 
        if(j<=31)
          {
             printf(" %d\t",i);
          
         if(i%7==0)
           {
               printf("\n");
           }
          }
           else{
               b++;
           }
    }
    printf("\n\n");
    printf("MON ");
    printf("TUE ");
    printf("WED ");
    printf("THU ");
    printf("FRI ");
    printf("SAT ");
    printf("SUN ");
    printf("\n");
    b=7-b;
    for ( i =1,j=1; i <=35; i++,j++)
    { 
        for ( ; b >= 1; b--)
        {
           printf("  \t"); 
           i++;
        }
        
        if(j<=30)
          {
             printf(" %d\t",j);
          
         if(i%7==0)
           {
               printf("\n");
           }
          }
           else{
               b++;
           }
    }
           printf("\n\n");
    printf("MON ");
    printf("TUE ");
    printf("WED ");
    printf("THU ");
    printf("FRI ");
    printf("SAT ");
    printf("SUN ");
    printf("\n");
    b=7-b;
    for ( i =1,j=1; i <=35; i++,j++)
    { 
        for ( ; b >= 1; b--)
        {
           printf("  \t"); 
           i++;
        }
        
        if(j<=31)
          {
             printf(" %d\t",j);
          
         if(i%7==0)
           {
               printf("\n");
           }
          }
           else{
               b++;
           }
    }
    


}
