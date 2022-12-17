#include <stdio.h>
int main()
{
    int a, fd, ld;
    printf("Enter a number to find the sum of its first and last digit: ");
    scanf("%d", &a);
    fd = a % 10;
    while (a > 9)
    {
        a = a / 10;
    }
    ld = a;
    int sum = fd + ld;
    printf("The sum of first and last digit of the given number = %d", sum);
    return 0;
}