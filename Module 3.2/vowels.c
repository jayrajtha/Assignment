#include <stdio.h>
int main()
{
    char b;
    printf("Enter an alphabet to check whether its a vowel or not: ");
    scanf("%c",&b);
    if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z'))
        switch (b)
        {
        case 'a':
            printf("%c is a vowel",b);
            break;
        case 'e':
            printf("%c is a vowel",b);
            break;
        case 'i':
            printf("%c is a vowel",b);
            break;
        case 'o':
            printf("%c is a vowel",b);
            break;
        case 'u':
            printf("%c is a vowel",b);
            break; 
        case 'A':
            printf("%c is a vowel",b);
            break;
        case 'E':
            printf("%c is a vowel",b);
            break;
        case 'I':
            printf("%c is a vowel",b);
            break;
        case 'O':
            printf("%c is a vowel",b);
            break;
        case 'U':
            printf("%c is a vowel",b);
            break;                                   
        default:
            printf("%c is a consonant",b);
            break;
        }
    else
        printf("Please enter an alphabet");
    return 0;
}