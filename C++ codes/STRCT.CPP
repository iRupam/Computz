#include<iostream.h>
#include<conio.h>

struct Employee
{
	int id;
	char name[30];
	float salary;
	char address[100];
};

void main()
{
	clrscr();

	Employee emp;

	cout << "\n-----Employee Data Entry-----";
	cout << "\nEnter ID: ";
	cin >> emp.id;

	cout << "\nEnter Name: ";
	cin >> emp.name;

	cout << "\nEnter Salary: ";
	cin >> emp.salary;

	cout << "\nEnter Address: ";
	cin >> emp.address;


	cout << "\n\n-----Employee Details-----";
	cout << "\nID: " << emp.id;
	cout << "\nName: " << emp.name;
	cout << "\nSalary: " << emp.salary;
	cout << "\nAddress: " << emp.address;

	getch();
}