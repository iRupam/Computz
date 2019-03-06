#include<iostream.h>
#include<conio.h>
struct Student
{
int reg_no;
char name[30];
float perc;
char sem[50];
};
void main()
{
clrscr();
Student std[10];
int size, i;
cout<<"\nEnter the no. of student data entry(max10):";
cin>>size;
cout<<"\n------Student Data Entry-----";
for(i=0; i<size; i++)
{
cout<<"\nEnter Reg_no:";
cin>>std[i].reg_no;
cout<<"\nEnter Name:";
cin>>std[i].name;
cout<<"\nEnter Perc:";
cin>>std[i].perc;
cout<<"\nEnter Semester:";
cin>>std[i].sem;
}
cout<<"\n\n------Student Details------";
for(i=0; i<size; i++)
{
cout<<"\nReg_no:"<<std[i].reg_no;
cout<<"\nName:"<<std[i].name;
cout<<"\nPerc:"<<std[i].perc;
cout<<"\nSem:"<<std[i].sem;
cout<<"\n-------------------------";
}
getch();
}