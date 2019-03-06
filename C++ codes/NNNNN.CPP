#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int num,i,cnt;
 cout<<"\nenter the no.of for prime:";
 cin>>num;
  cnt=0;
  for(i=1; i<=num ;i++)
  {
   if(num /i==0)
   {
    cnt++;
    }
  }
     if(cnt==2)
     {
       cout<<"\nits a prim no.";
       }
       else
       {
       cout<<"\n its a prime no.";
       }
       getch();
     }