#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 int rows,cols,arr[30][30],res,i,j;
 cout<<"\nEnter the no.of rows colums:\n";
 cin>>rows>>cols;
 cout<<"\nEnter the values:\n";
 for(i=0;i<rows;i++)
 {
   for(j=0;j<cols;j++)
   {
     cin>>arr[i][j];
   }
   }
   cout<<"\ncurrent matrix:";
   cout<<"\n______________";
   for(i=0;i<rows;i++)
   {
     cout<<"\n";
     for(j=0;j<cols;j++)
     {
       cout<<arr[i][j]<<"\t";
    }
    }
     cout<<"\n_____________";
     for(i=0;i<cols;i++)
   {
    res=0;
    for(j=0;j<rows;j++)
    {
    res=arr[j][i];
    }
    cout<<"\nThe sum of column"<<i+1<<"is"<<res;
    }
   getch();
}





