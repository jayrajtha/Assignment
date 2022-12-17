#include <stdio.h>
int main()
{
    char a[1000];
    int i;
    printf("Enter a string to find its lenght: ");
    gets(a);
    for (i = 0; a[i] != '\0'; i++)
    {

    }
    printf("String lenght = %d",i);
    return 0;
}