#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("\n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = a-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}