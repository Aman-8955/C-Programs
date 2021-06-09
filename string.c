#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter your string:- ");
    gets(name);
    puts(name);
    strrev(name);
    puts(name);
    return 0;
}
