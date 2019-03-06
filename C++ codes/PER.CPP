#include<iostream.h>
#include<comio.h>
void main()
{
int eng,hin,ass,math,sci,soc,total,per;
   clrscr();
   cout<<"\n *** MARKSHEET CALCULATION ***\n";
   cout<<"\n ENTER THE ENGLISH MARK:";
   cin>>eng;
   cout<<"\n ENTER THE HINDI MARK:";
   cin>>hin;
   cout<<"\n ENTER THE ASSAMESE MARK:";
   cin>>ass;
   cout<<"\n ENTER THE MATH MARK:";
   cin>>math;
   cout<<"\n ENTER THE SCIENCE MARK:";
   cin>>sci;
   cout<<"\n ENTER THE SOCIAL MARK:";
   cin>>soc;
   total=eng+hin+ass+math+sci+soc;
   per=total/6;
   cout<<"\n the total marks is:"<<total;
   cout<<"\n the percentage is:"<<per;
   getch();
}

