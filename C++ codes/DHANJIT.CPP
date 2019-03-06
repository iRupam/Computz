#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
cout<<"\n ENTER THE FIRST NUMBER:";
cin>>a;
cout<<"\n ENTER THE SECOND NUMBER:";
cin>>b;
cout<<"\n ENTER THE THIRD NUMBER:";
cin>>c;
if(a>b && a>c)
{
cout<<"\n the largest number is:"<<a;
}
else if(b>c)
{
cout<<"\n the largest number is:"<<b;
}
else
{
cout<<"\n the largest number is:"<<c;
}
getch();
}