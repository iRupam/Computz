#include<iostream.h>
#include<conio.h>
class shape
{
	protected:
	int base, height;
	public:
	shape()
	{
		cout<<"\nConstructor is called...";

	}
	void setbase(int _b)
	{	base= _b;

	}
	void setheight(int _h)
	{
		height= _h;
	}

	~shape()
	{
		cout<<"\nDestructor is called.....";
	}
};

class triangle: public shape
{
	public:
	int getarea()
	{
		return   (base *height)/2;
	}
};
void main()
{
	clrscr();
	int b, h, res;
	triangle t;

	cout<<"\nEnter the base of a triangle:";
	cin>>b;

	cout<<"\nEnter the height of a triangle:";
	cin>>h;
	t.setbase(b);
	t.setheight(h);

	res= t.getarea();

	cout<<"\nThe area of a triangle is"<<res;

	getch();
}