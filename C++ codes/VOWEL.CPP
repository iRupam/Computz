#include<iostream.h>
#include<conio.h>
 void main()
 {
 clrscr()j

 ;
 char ch;
 cout<<"\n Enter the Alphabet:";
 cin>>ch;
 switch(ch)
 {
 case'A':
 case'a':cout<<"\n It is a vowel";
	break;
 case'E':
 case'e':cout<<"\n It is a vowel";
	break;
 case'I':
 case'i':cout<<"\n It is a vowel";
	break;
 case'O':
 case'o':cout<<"\n It is a vowel";
	break;
 case'U':
 case'u':cout<<"\n It is a vowel";
	break;
 default:cout<<"\n It is a consonent";
	break;
 }
 getch();
 }