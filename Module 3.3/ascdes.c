#include <stdio.h>
int main()
{
    int x, XD = 0, XP = 0, a1, a2, a[250], b[250];
    printf("How many numbers you want to enter in array 1: ");
    scanf("%d", &a1);
    printf("How many numbers you want to enter in array 2: ");
    scanf("%d", &a2);
    for (int i = 0; i < a1; i++)
    {
        printf("For 1st array enter value %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int j = 0; j < a2; j++)
    {
        printf("For 2nd array enter value %d : ", j + 1);
        scanf("%d", &b[j]);
    }
    do
    {
        printf("---Enter 1 for descending order---\n---Enter 2 for ascending order---\n= ");
        scanf("%d", &x);
        if (x == 1)
        {
            for (int i = 0; i < a1; i++)
            {
                for (int j = i + 1; j < a1; j++)
                {
                    if (a[i] < a[j])
                    {
                        XD = a[i];
                        a[i] = a[j];
                        a[j] = XD;
                    }
                }
            }
            printf("The 1st array in descending order: ");
            for (int i = 0; i < a1; i++)
            {
                printf("%d ", a[i]);
            }
            for (int i = 0; i < a2; i++)
            {
                for (int j = i + 1; j < a2; j++)
                {
                    if (b[i] < b[j])
                    {
                        XP = b[i];
                        b[i] = b[j];
                        b[j] = XP;
                    }
                }
            }
            printf("\nThe 2nd array in descending order: ");
            for (int i = 0; i < a2; i++)
            {
                printf("%d ", b[i]);
            }
        }
        else if (x == 2)
        {
            for (int i = 0; i < a1; i++)
            {
                for (int j = i + 1; j < a1; j++)
                {
                    if (a[i] > a[j])
                    {
                        XD = a[i];
                        a[i] = a[j];
                        a[j] = XD;
                    }
                }
            }
            printf("The 1st array in ascending order: ");
            for (int i = 0; i < a1; i++)
            {
                printf("%d ", a[i]);
            }
            for (int i = 0; i < a2; i++)
            {
                for (int j = i + 1; j < a2; j++)
                {
                    if (b[i] > b[j])
                    {
                        XP = b[i];
                        b[i] = b[j];
                        b[j] = XP;
                    }
                }
            }
            printf("\nThe 2nd array in ascending order: ");
            for (int i = 0; i < a2; i++)
            {
                printf("%d ", b[i]);
            }
        }
        else
        {
            printf("Please Enter a valid number and try again\n");
        }

    } while (x != 1 && x != 2);

    return 0;
}