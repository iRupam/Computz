#include<iostream.h>
#include<conio.h>
void main()
{
int i=3,n,c,count;
clrscr();
cout<<"\n enter the series of prime number:";
cin>>n;
cout<<"2\n";
for(count=2;count<=n;)
{
for(c=2;c<=i-1;c++)
{
if(i%c==0)
{
break;
}
}
if(i==c)
{
cout<<"\n"<<i;
count++;
}
i++;
}
getch();
}