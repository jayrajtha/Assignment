#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("\n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", b);
            b++;
        }
        printf("\n");
    }

    return 0;
}