#include<iostream.h>
#include<conio.h>
struct student
{
int roll;
char name[20];
}stu[10];
void main()
{
int i,n;
clrscr();
cout<<"\n*** STORING STUDENT DETAILS ***\n";
cout<<"\n HOW MANY STUDENT DETAILS YOU WANT TO STORE?:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"\n EMTER THE STUDENT ROLL:";
cin>>stu[i].roll;
cout<<"\n ENTER THE STUDENT NAME:";
cin>>stu[i].name;

}
cout<<"\n ***DISPLAYING THE STUDENT DETAILS***\n";
cout<<"\n STU ROLL\t STU NAME\n";
for(i=0;i<n;i++)
{
cout<<"\n";
cout<<stu[i].roll<<"\t\t"<<stu[i].name;
}
getch();
}