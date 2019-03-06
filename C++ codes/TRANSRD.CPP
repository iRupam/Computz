#include<iostream.h>
#include<conio.h>
void main()
{
   int a[10][10],trans [10][10],i,j,row,col;
   clrscr;
   cout<<"\nEnter the row:";
   cin>>row;
   cout<<"nEnter the col:";
   cin>>col;
   cout<<"\nEnter the numbers:";
   for(i=0;i<row;i++)

   {
     for(j=0;j<col;j++)
     {
     cin>>a[i][j];
     }
  }
  cout<<"\n the original matrix:";
  for(i=0;i<row;i++)
   {
   cout<<"\n";
   for(j=0;j<col;j++)
    {
    cout<<"\t"<<a[i][j];
    }
  }
  // converting to transpose
  for(i=0;i<row;i++)
  {
  for(j=0;j<col;j++)
  {
   trans[j][i]=a[i][j];
   }
 }
 cout<<"\n display transpose matrix:";
 for(i=0;i<col;i++)
 {
 cout<<"\n";
 for(j=0;j<row;j++)
  {
   cout<<"\t"<<trans[i][j];
   }
 }
   getch();
   }
