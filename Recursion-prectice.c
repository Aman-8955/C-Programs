#include<stdio.h>

int recursion(int);
void main(){
   int num,rec,i; 
   printf("Enter your number:- ");
   scanf("%d",&num);
   for ( i = 1; i < num; i++)
   {
       printf("%d.  %d\n\a",i,recursion(i));
   }
}

int recursion(int n){
      if(n==1||n==0)
         return 1;
      else
         return n*recursion(n-1);
}