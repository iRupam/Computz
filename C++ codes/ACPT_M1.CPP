#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int rows, cols, arr[10][10], trans[10][10], i, j, res;
cout<<"\nEnter the no. of rows of a matrix (max 10):";
cin>>rows;
cout<<"\nEnter the no. of cols of a matrix (max 10):";
cin>>cols;
cout<<"\nEnter the values for the matrix:";
for(i=0; i<rows; i++)
for(