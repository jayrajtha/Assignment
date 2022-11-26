#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter a number to convert the following\n1:Days to years\n2:years to days\nEnter here: ");
    scanf("%f",&a);
    if(a==1)
    {
        printf("Enter the number of days: ");
        scanf("%f", &b);
        printf("= %.2f years",b/365);
    }
    else if(a==2)
    {
        printf("Enter the number of years: ");
        scanf("%f",&c);
        printf("= %.2f days",c*365);
    }
    else
    {
        printf("Please enter a valid number");
    }
    return 0;
}