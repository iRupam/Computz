#include<stdio.h>
struct employee{
    int id;
    int salary;
    char name[30];
    };
int main(){
    struct employee emp;
    printf("Enter details of the employee\n");
    printf("Name:?\n");
    scanf("%[^\n]",&emp.name);
    printf("ID:?\n");
    scanf("%d",&emp.id);
    printf("Salary:?\n");
    scanf("%d",&emp.salary);

    printf("Printing the details");
    printf("Name: %s\n",emp.name);
    printf("ID: %d\n",emp.id);
    printf("Salary: %d\n",emp.salary);

    }
