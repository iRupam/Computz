#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char ch[40], ch1[20];
clrscr();
cout<<"\n ENTER THE FIRST STRING:";
cin>>ch;
cout<<"\n ENTER THE SECOND STRING:";
cin>>ch1;
strcat(ch,ch1);
cout<<"\n THE STRING IS CONCODINATE:"<<ch;
getch();
}
