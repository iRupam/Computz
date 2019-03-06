#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,sum=0;
clrscr();
cout<<"\n ENTER THE NUMBER:";
cin>>n;
for(i=0;i<=n;i++)
{
sum=sum+i;
}
cout<<"\n the sum of"<<n<<"number is"<<sum;
getch();
}