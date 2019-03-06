#include<iostream.h>
#include<conio.h>
void main()
{
 int a[20],i,n,min;
 clrscr();
 cout<<"\n FIND OUT THE SMALLEST NUMBER IN ARRAY:";

 cout<<"\n ENTER THE SIZE OF ARRAY:";
 cin>>n;
 cout<<"\n ENTER THE NUMBER:";
 for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  min=a[0];
  for(i=0;i<n;i++)
  {
   if(a[i]<min)
   {
    min=a[i];
   }
   cout<<"\n THE SMALLEST NUMBER IS:"<<min;
  getch();
 }