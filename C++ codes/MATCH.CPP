#include<iostream.h>
#include<conio.h>
void main()
{
  int a[10],i,n,key;
  clrscr();
  cout<<"\n FIND OUT THE NUMBER IN ARRAY";
  cout<<"\n ENTER THE SIZE OF ARRAY:";
  cin>>n;
  cout<<"\n ENTER THE NUMBER:";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout<<"\n ENTER YOUR NUMBER:";
  cin>>key;
  for(i=0;i<n;i++)
  {
   if(a[i]==key)
   {
    cout<<"\n YOUR NUMBER IS MATCHED";
   }
  }

    getch();
  }


