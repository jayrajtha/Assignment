#include <stdio.h>
int main()
{
    int a ;
    printf("Enter a number to find out the corresponding day of the week : ");
    scanf("%d",&a);
    switch (a)
    {
    case 1 :
        printf("Monday");
        break;
    case 2 :
        printf("Tuesday");
        break;
    case 3 :
        printf("Wednesday");
        break;    
    case 4 :
        printf("Thusrday");
        break;
    case 5 :
        printf("Friday");
        break;
    case 6 :
        printf("Saturday");
        break;
    case 7 :
        printf("Sunday");
        break;                
    default:
        printf("Please enter a number from 1-7");
        break;
    }
    return 0;
}