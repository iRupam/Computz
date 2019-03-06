#include<iostream.h>
#include<conio.h>
int card,pass,card_no,password,amt,temp;
card=45567;
pass=4424;
clrscr();
cout<<"\n WELLCOME TO STATE BANE OF INDIA\n:";
cout<<"\n;
cout<<"\n;
cout<<"n ENTER THE CORD NUMBER:";
cin>>card_no;
cout<<"\n ENTER THE PINCORD:";
cin>>password;
if(card==card_no && pass==password)
{
cout<<"\n ENTER THE NUMBER BETWEEN 20 TO 99:";
cin>>temp;
if(temp>=20 && temp<=99)
{
cout<<"\n ENTER THE AMOUNT:";
cin>>amt;
cout<<"\n PLEASE WAIT.... PROCESSING...";
cout<<"\n TAKE YOU CASE. THANK YOU:";
}
else
{
 cout<<"\n YOU WOULD NOT ENTER THE NUMBER BETWEEN 20 TO 99";
 }
  }
 else
  {
  cout<<"\n YOU CARD NUMBER OR YOUR PASSWORD IS INCORRECT!!!";
  }
  getch();
  }


