#include<iostream.h>
#include<conio.h>
void main()
{
  int i,n,sum=0;
  clrscr();
  cout<<"\nSUM OF N NUMBER:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
   sum=sum+i;
  }
  cout<<"\n THE SUM OF "<<n<<" NUMBER IS:"<<sum;
  getch();
}
