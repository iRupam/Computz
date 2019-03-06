#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,flag=0;
  clrscr();
  cout<<"\n ENTER THE NUMBER:";
  cin>>n;
  for(i=2;i<=n/2;i++)
  {
   if(n%i==0)
   {
    flag=1;
    break;
   }
  }
  if(flag==0)
  {
   cout<<"\n it is a prime number";
  }
  else
  {
   cout<<"\n it is not a prime number";
  }
  getch();
}
