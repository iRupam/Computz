#include<iostream.h>
#include<conio.h>
void main()
{
 float basic,ta,da,hra,it,pf,gross,net;
 clrscr();
 cout<<"\n ENTER THE BASIC:";
 cin>>basic;
 cout<<"\n ENTER THE TA:";
 cin>>ta;
 cout<<"\n ENTER THE DA:";
 cin>>da;
 cout<<"\n ENTER THE HRA:";
 cin>>hra;
 gross=basic+ta+da+hra;
 it=gross*4/100;
 pf=gross*5/100;
 net=gross-(it+pf);
 cout<<"\n THE GROSS SALARY IS:"<<gross;
 cout<<"\n THE DEDUCTION PART IS:"<<it+pf;
 cout<<"\n THE NET SALARY IS:"<<net;
 getch();
}


