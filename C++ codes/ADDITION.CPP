
#include<iostream.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,row,col;
clrscr();
cout<<"\n ENTER THE ROW:";
cin>>row;
cout<<"\n ENTER THE COL:";
cin>>col;
cout<<"\n ENTER THE FIRST MATRIX:";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>a[i][j];
}
}
cout<<"\n ENTER THE SECOND MATRIX:";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>b[i][j];
}
cout<<"\n DISPLAY THE FIRST MATRIX:";
for(i=0;i<row;i++)
{
cout<<"\n";
for(j=0;j<col;j++)
{
cout<<"\t"<<a[i][j];
}
}
cout<<"\n DISPLAY THE SECOND MATRIX:";
for(i=0;i<row;i++)
{
cout<<"\n";
for(j=0;j<col;j++)
{
cout<<"\t"<<b[i][j];
}
}
for(i=0;i<row;i++)
{
for(i=0;i<col;j++)
{
c[i][j]=a[i][j]+b[i][j]
}
}
cout<<"\n DISPLAY THE ADDITION OF TWO MATRIX:";
for(i=0;i<row;i++)
{
cout<<"\n";
for(j=0;j<col;j++)
{
cout<<"\t"<<c[i][j];
}
}
getch();
}
