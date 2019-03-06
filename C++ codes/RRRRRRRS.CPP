#include<iostream.h>
#include<conio.h>
class shape
{

     protected:
     int width,height;
     public:
     shape()
     {

	  cout<<"\n constructor is called......";
     }
     void setwidth(int w)

     {

	   width= w;
     }
     void setheight(int h)

	  height= h;
     }

	 ~shape()
     {
     cout<<"\n destructor is called......";
     }

     };
     class rectangle:public shape
     {

	 public:
	 int getarea()

	 {
	 return width * height;
	 }
    };
    void main()
    {

	  clrscr();
	  int w,h,res;
	  rectangle r;
	  cout<<"\n enter the width of a rectangle:";
	  cin>>w;
	  cout<<"\n enter the height of a rectangle:";
	  cin>>h;
	  r.set width (w);
	  r.set height(h);
	  res=r. get area();
	  cout<<"\n the area of a rectangle is"<<res;
	  getch();
      }

