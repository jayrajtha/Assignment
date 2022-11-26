#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the value for a: ");
    scanf("%d",&a);
    printf("Enter the value for b: ");
    scanf("%d",&b);
    printf("before swapping a=%d b=%d\n",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("after swapping a=%d b=%d",a,b);
    return 0;
}