#include<iostream.h>
#include<conio.h>
void main()
{
      clrscr();
      float basic,da,ta,hra,gross,pf,it,net;
  cout<<"\nEnter Basic Salary of Employee=";
  cin>>basic;
  da=basic*30/100 ;
  ta=basic*12/100  ;
  hra=basic*10/100  ;
  gross=basic+da+ta+hra;
  pf=gross*8/100;
  it=gross*2.5/100;
  net=gross-pf-it;
 cout<<"\n\n******salary Details are*****\n";
 cout<<"\nbasic salary is="<<basic;
 cout<<"\ndearness allowenee is="<<da;
 cout<<"\ntravlling allowenee is="<<ta;
 cout<<"\nhouse rent allowenee is="<<hra;
 cout<<"\ngross salary is ="<<gross;
 cout<<"\nprovident fund is="<<pf;
 cout<<"\nincometex is="<<it;
 cout<<"\nnet salary is="<<net;
 getch();
 }








