#include <stdio.h>
void main()
{
    int digit, i, num[100], biggest=0;
    printf("Enter your quintity of your number:-");
    scanf("%d", &digit);
    printf("Enter your numbers(after enter one number please press enter button):-");
    for (i = 0; i < digit; i++)
    {
        scanf("%d", &num[i]);
    }
    for (i = 0; i < digit; i++)
    {
        if (num[i] > biggest)
        {
            biggest = num[i];
        }
    }
    printf("Your biggest number is %d", biggest);
}
