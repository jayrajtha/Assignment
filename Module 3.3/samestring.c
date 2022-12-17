#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    int x;
    printf("Enter a string to find if its reverse is palindrome or not: ");
    gets(a);
    strcpy(b, a);
    strrev(b);
    x = strcmp(a, b);
    if (x == 0)
    {
        printf("Given string is a palindrome");
    }
    else
    {
        printf("The given string is not a palindrome");
    }
    return 0;
}