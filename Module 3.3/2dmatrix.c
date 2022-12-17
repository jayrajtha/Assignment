#include <stdio.h>
int main()
{
    int a[50][50];
    int b[50][50];
    int ans[50][50];
    int q, w, i, j, x, XD = 0;
    printf("Enter the size of matrix for eg: 3x3 = ");
    scanf("%dx%d", &q, &w);
    for (i = 0; i < q; i++)
    {
        for (j = 0; j < w; j++)
        {
            printf("Enter value for matrix 1st for %dx%d : ", (i + 1), (j + 1));

            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < q; i++)
    {
        for (j = 0; j < w; j++)
        {
            printf("Enter value for matrix 2nd for %dx%d : ", (i + 1), (j + 1));

            scanf("%d", &b[i][j]);
        }
    }
    printf("\n----Enter the following to perform the following----\n1:Addition   2:Subtraction\n= ");
    scanf("%d", &x);
    do
    {
        if (x == 1)
        {
            for (i = 0; i < q; i++)
            {
                for (j = 0; j < w; j++)
                {
                    ans[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("Sum of the given two matrix :\n");
            for (i = 0; i < q; i++)
            {
                for (j = 0; j < w; j++)
                {
                    printf("%d  ", ans[i][j]);
                }
                printf("\n");
            }
        }
        else if (x == 2)
        {
            for (i = 0; i < q; i++)
            {
                for (j = 0; j < w; j++)
                {
                    ans[i][j] = a[i][j] - b[i][j];
                }
            }
            printf("difference of the given two matrix :\n");
            for (i = 0; i < q; i++)
            {
                for (j = 0; j < w; j++)
                {
                    printf("%d  ", ans[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Enter a valid number and please try again");
        }
    } while (x != 1 && x != 2 && x != 3);

    return 0;
}