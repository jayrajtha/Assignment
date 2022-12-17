#include <stdio.h>
long double factorial(int a)
{
    int c;
    if (a > 0)
    {
        return a * factorial(a - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int b, m;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &b);
    m = factorial(b);
    printf("Factorial of the given number = %ld", m);
    return 0;
}
