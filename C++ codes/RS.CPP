#include<iostream.h>
#include<conio.h>
struct employee
{
int id;
char name[20];
char des[20];
char sal[20];
}emp[10];
void main()
{
int i,n;
clrscr();
cout<<"\n*** STORING EMPLOYEE DETAILS ***\n";
cout<<"\n HOW MANY EMPLOYEE DETAILS YOU WANT TO STORE?:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\n EMTER THE EMPLOYEE ID:";
cin>>emp[i].id;
cout<<"\n ENTER THE EMPLOYEE NAME:";
cin>>emp[i].name;
cout<<"\n ENTER THE EMPLOYEE DESIGNATION:";
cin>>emp[i].des;
cout<<"\n ENTER THE EMPLOYEE SALARY:";
cin>>emp[i].sal;
}
cout<<"\n ***DISPLAYING THE EMPLOYEE DETAILS***\n";
cout<<"\n EMP ID\t EMP NAME\t EMP DES\t EMP SALARY\n";
for(i=0;i<n;i++)
{
cout<<"\n";
cout<<emp[i].id<<"\t\t"<<emp[i].name<<"\t\t"<<emp[i].des<<"\t\t"<<emp[i].sal;
}
getch();
}