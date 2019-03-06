#include<iostream.h>
#include<conio.h>
 void main()
 {
 int i,num,flag=0;
 clrscr();
 cout<<"\n ENTER THE NUMBER:";
 cin>>num;
 for(i=2;i<=num/2;i++)
 {
 if (num%i==0)
 {
 flag=1;
 break;
 }
 }
 if(flag==0)
 {
 cout<<"\n IT IS A NUMBER PRIME";
 }
 else
 {
 cout<<"\n IT IS NOT A PRIME NUMBER";
 }
 getch();
 }