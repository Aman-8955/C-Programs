#include<stdio.h>
void main()
{
    int p=5,*p1;
    p1=&p;
    p++;
    printf("%d\n%d\n%d",p,p1,&p);

}