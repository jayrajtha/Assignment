#include <stdio.h>
int main()
{
    int a=972;
    int b;
    printf("Numbers are going to be printed from 972 to 897 :)\nWhen you enter a number: ");
    scanf("%d",&b);
    for ( a = 972; a > 896; a--)
    {
        printf("%d ",a);
    }
    return 0;
}
    
    