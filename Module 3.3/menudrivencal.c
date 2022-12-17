#include <stdio.h>
int main()
{
    int a;
    float b, c;

    while (a != 5)
    {
        printf("Enter a number to perform the following\nAddition:1     Subtraction:2    Multiplication:3    Division:4   EXIT:5\n: ");
        scanf("%d", &a);
        if (a > 5 || a < 1)
        {
            printf("Please enter a valid number and try again");
        }
        else if (a == 5)
        {
            printf("----Thank you----");
        }
        else
        {
            printf("Enter 1st number: ");
            scanf("%f", &b);
            printf("Enter 2nd number: ");
            scanf("%f", &c);
            switch (a)
            {
            case 1:
                printf("Sum = %.2f", b + c);
                break;
            case 2:
                printf("difference = %.2f", b - c);
                break;
            case 3:
                printf("product = %.2f", b * c);
                break;
            case 4:
                printf("division = %.2f", b / c);
                break;
            }
        }
        printf("\n");
    }

    return 0;
}
