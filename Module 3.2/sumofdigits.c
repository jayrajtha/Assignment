#include<stdio.h>
int main()
{
    int sum=0,a,r;
    printf("Enter a number to find the sum of its digits: ");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    printf("Sum of digits of the given number= %d",sum);
    return 0;
}