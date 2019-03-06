#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
clrscr();
cout<<"\n ENTER THE FACTORIAL OF N NUMBERS:";
cin>>n;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
cout<<"\n the factorial of"<<n<<"number is"<<fact;
getch();
}
