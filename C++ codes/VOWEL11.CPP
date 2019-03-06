#include<iostream.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 cout<<"\n ENTER THE ALPHABET:";
 cin>>ch;
 switch(ch)
 {
  case 'a':cout<<"it is vowel";
	    break;
  case 'e':cout<<"it is vowel";
	   break;
  case 'i':cout<<"it is vowel";
	   break;
  case 'o':cout<<"it is vowel";
	   break;
  case 'u':cout<<"it is vowel";
	   break;
  default:cout<<"it is consonent";
	  break;
  }

  getch();
}