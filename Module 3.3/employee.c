#include <stdio.h>
#include <string.h>
struct employee
{
    char empno[15];
    char empname[30];
    char empadd[100];
    int age;
};

int main()
{
    struct employee emp;
    printf("Enter employee's number: ");
    gets(emp.empno);
    printf("Enter employee's name: ");
    gets(emp.empname);
    printf("Enter employee's address: ");
    gets(emp.empadd);
    printf("Enter employee's age: ");
    scanf("%d", &emp.age);
    printf("---------------------------------------------------------------------\n");
    printf("EMPLOYEE NO. : %s", emp.empno);
    printf("\nNAME : %s", emp.empname);
    printf("\nADDRESS: %s", emp.empadd);
    printf("\nAGE: %d", emp.age);
    return 0;
}