#include <stdio.h>
int main() {
    int a[1000],n,i,tot=0;
    printf("Enter your digits number:- ");
    scanf("%d",&n);
    printf("Enter your digits:- ");
    for (i=0; i<n; i++) {
    scanf("%d",&a[i]);
    tot=tot+a[i];
    }
    printf("\nTotal of your numbers is %d",tot);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
       
    return 0;
}
