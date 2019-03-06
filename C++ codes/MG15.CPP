#include<iostream.h>
#include<conio.h>

void main()
{
int a,b,c;
clrscr();
cout<<"\n enter the first number";
cin>>a;
cout<<"\n enter the second number";
cin>>b;
cout<<"\n enter the third number";
cin>>c;
if(a>b && a>c)
{
cout<<"\n"<<a<<" it is the largest number";
}
else if (b>c)
{
cout<<"\n"<<b<<" it is the largest number";
}
else
{
cout<<"\n"<<c<<" it is the largest number";
}
getch();
}
getch();
}