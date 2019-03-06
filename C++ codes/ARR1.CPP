#include<iostream.h>
#include<conio.h>
void main()
{
  int a[20],i,n;
  clrscr();
  cout<<"\n enter the array size:";
  cin>>n;
  cout<<"\n enter the number:";
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"\n display the array number:";
  for(i=0;i<n;i++)
  {
   cout<<"\t"<<a[i];
  }
  getch();
}