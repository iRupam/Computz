#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float p,r,t,si;
cout<<"\n Enter the principle amount:";
cin>>p;
cout<<"\n Enter the rate:";
cin>>r;
cout<<"\n Enter the time:";
cin>>t;
si=p*r*t/100;
cout<<"\n The simple interest:"<<si;
cout<<"\ The total with interest:"<<p+si;
getch();
}