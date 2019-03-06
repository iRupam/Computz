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
Employee emp[10];
int size, i;

cout<<"\nEnter the no. of employee data entry (max 10):";
cin>>size;

cout<<"\n-----Employee Data Entry-----";
for(i=0; i<size; i++)
{
cout<<"\nEnter ID:";
cin>>emp[i].id;
cout<<"\nEnter Name:";
cin>>emp[i].name;
cout<<"\nEnter Salary:";
cin>>emp[i].salary;
cout<<"\nEnter Address:";
cin>>emp[i].address;
}
cout<<"\n\n-----Employee Details-----";
for(i=0; i<size; i++)
{
cout<<"\nID:"<<emp[i].id;
cout<<"\nName:"<<emp[i].name;
cout<<"\nSalary:"<<emp[i].salary;
cout<<"\nAddress:"<<emp[i].address;
cout <<"\n---------------------------";
}

getch();
}