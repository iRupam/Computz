#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
  clrscr();
  char str[30];
  cout<<"\nEnter any string:";
  cin>>str;
  strrev(str);
  cout<<"\nReverse string is:"<<str;
  getch();
  }