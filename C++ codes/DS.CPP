#include<iostream.h>
#include<conio.h>
class line                             `
{
public:
void setlength(float len);
float getlength();
line();
~line();
Private();
float length;
};
line::line()
{
cout<<"\n object is being created";
}
line::~line()
{
cout<<"\n object is being deleted";
}
void line::setlength(float len)
{
length=len;
}
float line::getlength()
{
return length;
}
void main()
{
line line;
line.setlength(6.0);
cout<<"\n the length of line"<<line.getlength();
getch();
}

