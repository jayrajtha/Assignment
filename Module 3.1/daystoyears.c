#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number to convert the following\n1:Days to years\n2:years to days\nEnter here: ");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Enter the number of days: ");
        scanf("%d",&b);
        printf("= %d years",b/365);
    }
    else if(a==2)
    {
        printf("Enter the number of years: ");
        scanf("%d",&c);
        printf("= %d days",c*365);
    }
    else
    {
        printf("Please enter a valid number");
    }
    return 0;
}