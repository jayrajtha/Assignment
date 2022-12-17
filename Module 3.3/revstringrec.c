#include <stdio.h>
#include <string.h>
void reverse(char b[2000])
{
    strrev(b);
    printf("Reverse: %s", b);
}
int main()
{
    char a[200];
    printf("Enter a scentence to reverse it: ");
    gets(a);
    reverse(a);
    return 0;
}