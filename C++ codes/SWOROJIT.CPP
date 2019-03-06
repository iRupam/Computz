#include<iostream.h>
#include<conio.h>

struct Employee
{
int empid;
char name[30];
char addreass[30];
float salary;
};
void main()
{
clrscr();
Employee e;
cout << "\n__________Employee Data Enter___________";
cout << "\nEnter id:";
cin >> e.empid;
cout << "\nEnter name:";
cin >> e.name;
cout << "\nEnter addreass:";
cin >> e.addreass;
cout << "\nEnter salary:";
cin >> e.salary;
cout << "\n\n_______Employee Salary________:";
cout << "\nID:" << e.empid;
cout << "\nName:" << e.name;
cout << "\nAddreass:" <<e.addreass;
cout << "\nSalary:" <<e.salary;
getch();
}
