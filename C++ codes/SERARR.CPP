#include<iostream.h>
#include<conio.h>
void main()
{
 int a[20],i,n;
 clrscr();
 cout<<"\n ENTER THE SIZE OF ARRAY:";
 cin>>n;
 cout<<"\n ENTER THE NUMBER:";
 for(i=0;i<n;i++)
 {
   cin>>a[i];
 }
 cout<<"\n DISPLAY THE ARRAY:";
 for(i=0;i<n;i++)
 {
  cout<<"\n";
  cout<<"a["<<i<<"]="<<a[i];
 }
 getch();
}

