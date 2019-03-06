#include<iostream.h>
#include<conio.h>
void main()
{
char op;
  clrscr();
  cout<<"\n ENTER THE FIRST NUMBER:";
  cin>>a;
  cout<<"\n ENTER THE SECOND NUMBER:";
  cin>>b;
  cout<<"\n ENTER THE OPERATION(+,-,*,/):";
  cin>>op;
  switch(op)
  {
    case '+':c=a+b;
	     cout<<"\n THE ADDITION OF TWO NUMBER:"<<c;
	     break;
    case '-':c=a-b;
	     cout<<"\n THE SUBSTRATION OF TWO NUMBER:"<<c;
	     break;
    case '*':c=a*b;
	     cout<<"\n THE MULTIPLICATION OF TWO NUMBER:"<<c;
	     break;
    case '/':c=a/b;
	     cout<<"\n THE DIVISION OF TWO NUMBER IS:"<<c;
	     break;
    default:cout<<"\n YOU CHOOSE INVALID OPERATION !!! SORRY TRY AGAIN";
	     break;
  }
  getch();
}