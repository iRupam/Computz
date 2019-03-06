#include<iostream.h>
#include<conio.h>
struct employee
{
  int emp_id;
  char name[20];
  int sal;
}emp,emp2;
void main()
{
  cout<<"\n ***ENTER THE EMPLOYEE DETAILS ***\n";
  cout<<"\n ENTER THE EMPLOYEE ID:";
  cin>>emp.emp_id;
  cout<<"\n ENTER THE EMPLOYEE NAME:";
  cin>>emp.name;
  cout<<"\n ENTER THE EMPLOYEE SALARY:";
  cin>>emp.sal;
  cout<<"\n";
  cout<<"\n ENTER THE EMPLOYEE ID:";
  cin>>emp2.emp_id;
  cout<<"\n ENTER THE EMPLOYEE NAME:";
  cin>>emp2.name;
  cout<<"\n ENTER THE EMPLOYEE SALARY:";
  cin>>emp2.sal;
  cout<<"\n";
  cout<<"\n DISPLAY THE EMPLOYEE DETAILS";
  cout<<"\n"<<"emp id"<<"\t"<<"emp name"<<"\t"<<"emp salary";
  cout<<"\n"<<emp.emp_id<<"\t"<<emp.name<<"\t"<<emp.sal;
  cout<<"\n"<<emp2.emp_id<<"\t"<<emp2.name<<"\t"<<emp2.sal;
  getch();
}



