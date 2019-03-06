#include<iostream.h>
#include<conio.h>
void main()
{
  int a[20],i,n,max;
  clrscr();
  cout<<"\n FIND OUT THE LARGEST NUMBER IN ARRAY:";
  cout<<"\n ENTER THE ARRAY SIZE:";
  cin>>n;
  cout<<"\n ENTER THE NUMBER:";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  max=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]>max)
    {
     max=a[i];
    }
  }
  cout<<"\n THE LARGEST NUMBER IN ARRAY IS:"<<max;
  getch();
}

