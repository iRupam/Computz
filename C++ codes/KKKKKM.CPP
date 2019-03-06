#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int i, num, fact=1;
 cout<<"\n enter n no of factorial:";
 cin>>num;
 for(i=1;i<=num;i++)
 { fact=fact*i;
 }
 cout<<"\n the factorial of"<<num<<" number is:"<< fact;
  getch();
  }