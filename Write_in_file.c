#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char s[50];
    fp = fopen("file.txt", "w");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    printf("Enter your data:- ");
    gets(s);
    fputs(s, fp);
    fclose(fp);
}