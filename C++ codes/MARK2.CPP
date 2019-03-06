#include<iostream.h>
#include<conio.h>
void main()
{
float math,sci,eng,hin,ass,soc,total,per;
clrscr();
cout<<"\n *** Marksheet Programme ***";
cout<<"\n Enter the math mark:";
cin>>math;
cout<<"\n Enter the sci mark:";
cin>>sci;
cout<<"\n Enter the eng mark:";
cin>>eng;
cout<<"\n Enter the hin mark:";
cin>>hin;
cout<<"\n Enter the ass mark:";
cin>>ass;
cout<<"\n Enter the soc mark:";
cin>>soc;
total=math+sci+eng+hin+ass+soc;
per=total/6;
cout<<"\n The total mark is:"<<total;
cout<<"\n The percentage is:"<<per;
if(per>=60 && per<=100)
{
cout<<"\n 1ST DIV";
}
else if(per>=45 && per<60)
{
cout<<"\n 2ND DIV";
}
else if(per>=30 && per<45)
{
cout<<"\n 3RD DIV";
}
getch();
}
