  #include<iostream.h>
  #include<conio.h>
  void main()
  {
  clrscr();
  char ch;
  cout<<"\nenter any character:";
  cin>> ch;
  switch(ch)
  {
   case'a':
   case'A':
   case'e':
   case'E':
   case'i':
   case'I':
   case'o':
   case'O':
   case'u':
   case'U':
   cout<<"\n its a vowel";
   break;
   default:
   cout<<"\n its a consonant";
   break;
   }
   getch();
   }