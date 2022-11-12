#include <stdio.h>
int main()
{
    int a;
    printf("Enter your dersired radius: ");
    scanf("%d",&a);
    float area;
    area=3.14*a*a;
    printf("The area of given circle is %.2f",area);
    return 0;
}