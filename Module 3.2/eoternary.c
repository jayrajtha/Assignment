#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number to check whether its odd or even: ");
    scanf("%d",&a);
    a % 2 == 0 ? printf("Even number") : printf("Odd number");
    return 0;
}