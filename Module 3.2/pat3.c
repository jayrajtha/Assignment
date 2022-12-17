#include <stdio.h>
int main()
{
    int a;
    char b = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    printf("\n");
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", b);
            b = b + 1;
        }
        printf("\n");
    }

    return 0;
}