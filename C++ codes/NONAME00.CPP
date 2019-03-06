#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
clrscr();
char str1[30], str2[30];
cout<<"\nEnter any string:";
cin.getline(str2, 30);
strcpy(str1, str2);
cout<<"\nCopied string is "<<str1;
getch();
}

