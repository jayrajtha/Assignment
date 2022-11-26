#include <stdio.h>
int main()
{
    int a[250],m=0,b;
    printf("How many numbers you want to enter: ");
    scanf("%d",&b);
    for (int i = 0; i < b; i++)
    {
        printf("Enter value %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < b; i++)
    {
        if (a[i]>m)
        {
            m=a[i];
        }
    }
    printf("The maximum value from the given numbers= %d",m);

    return 0;
}