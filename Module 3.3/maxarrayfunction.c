#include <stdio.h>
int max(int x[], int k)
{
    int a;
    a = x[0];
    for (int i = 1; i < k; i++)
    {
        if (x[i] > a)
            a = x[i];
    }
    return (a);
}
int main()
{
    int b[200];
    int nu, m;
    printf("How many numbers you want to enter: ");
    scanf("%d", &nu);
    for (int q = 0; q < nu; q++)
    {
        printf("Enter number %d: ", q + 1);
        scanf("%d", &b[q]);
    }
    m = max(b, nu);
    printf("%d is the maximum number", m);
    return 0;
}