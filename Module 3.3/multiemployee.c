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
    int XD = 5;
    struct employee emp[XD];
    for (int i = 0; i < XD; i++)
    {
        printf("Enter details for emloyee %d: \n", i + 1);
        printf("Enter employee's number: ");
        gets(emp[i].empno);
        printf("Enter employee's name: ");
        gets(emp[i].empname);
        printf("Enter employee's address: ");
        gets(emp[i].empadd);
        printf("Enter employee's age: ");
        scanf("%d", &emp[i].age);
        printf("---------------------------------------------------------------------\n");
    }
    for (int j = 0; j < XD; j++)
    {
        printf("---------------------------------------------------------------------\n");
        printf("DETAILS OF EMPLOYEE %d", j + 1);
        printf("\nEMPLOYEE NO. : %s", emp[j].empno);
        printf("\nNAME : %s", emp[j].empname);
        printf("\nADDRESS: %s", emp[j].empadd);
        printf("\nAGE: %d", emp[j].age);
    }

    return 0;
}