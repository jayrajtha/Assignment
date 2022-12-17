#include <stdio.h>
int main()
{
    int a;
    char b = 'A';
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c ", b + j);
        }
        printf("\n");
    }

    return 0;
}