#include <stdio.h>
int main()
{   int b,h;
    printf("Base: ");
    scanf("%d",&b);
    printf("Height: ");
    scanf("%d",&h);
    float area;
    area=b*h*0.5;
    printf("the are of given triangle is %.2f",area);
    return 0;
}

