#include<iostream.h>
#include<conio.h>
struct student
{
char name[20];
int roll;
}s1,s2;
void main()
{
cout<<"\n ***STUDENT DATABASE SYSTEM*** \n";
cout<<"\n";
cout<<"\n";
cout<<"\n ENTER THE FIRST STUDENT NAME:";
cin>>s1.name;
cout<<"\n ENTER THE FIRST STUDENT ROLL NO:";
cin>>s1.roll;
cout<<"\n ENTER SECOND STUDENT NAME:";
cin>>s2.name;
cout<<"\n ENTER SECOND STUDENT ROLL NO:";
cin>>s2.roll;
cout<<"\n\n\n";
cout<<"\n DISPLAY STUDENT DETAIL:";
cout<<"\n STUDENT NAME \t STUDENT ROLL NO";
cout<<"\n.................................";
cout<<"\n"<<"\t"<<s1.name<<"\t\t"<<s1.roll;
cout<<"\n"<<"\t"<<s2.name<<"\t\t"<<s2.roll;
getch();
}
