#include <stdio.h>
int main()
{
    float a,b,c;  
    printf("Enter your principle amount value: ");
    scanf("%f",&a);
    printf("Enter the rate of intrest: ");
    scanf("%f",&b);
    printf("Enter tenure in years: ");
    scanf("%f",&c);
    float x,y;
    x=a*b*c*0.01;
    printf("SIMPLE INTREST:%.2f\n",x);
    y=x+a;
    printf("AMOUNT:%.2f rupees",y);
    return 0;
}