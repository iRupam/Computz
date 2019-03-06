#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10], trans[10][10],i,j,row,col;
clrscr();
cout<<"\n ENTER THE ROW:";
cin>>row;
cout<<"\n ENTER THE COL:";
cin>>col;
cout<<"\n ENTER THE MATRIX:";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>a[i][j];
}
}
cout<<"\n DISPLAY THE ORIGINAL MATRIX:";
for(i=0;i<row;i++)
{
cout<<"\n";
for(j=0;j<col;j++)
{
cout<<"\t"<<a[i][j];
}
}
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
trans[j][i]=a[i][j];
}
}
cout<<"\n DISPLAY THE TRANSPOSE MATRIX:";
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