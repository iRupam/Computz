#include<iostream.h>
#include<conio.h>

class Shape
{
	protected:
	int width, height;

	public:
	Shape()
	{
		cout << "\nConstructor is called";
	}

	void setWidth(int w)
	{
		width = w;
	}

	void setHeight(int h)
	{
		height = h;
	}

	~Shape()
	{
		cout << "\nDestructor is called";
	}
};

class Rectangle: public Shape
{
	public:
	int getArea()
	{
		return (width * height);
	}

};

void main()
{
	clrscr();

	int res, _w, _h;
	Rectangle r;

	cout << "\nEnter width and height for rectangle";
	cin >> _w >> _h;

	r.setWidth(_w);
	r.setHeight(_h);

	res = r.getArea();

	cout << "\nArea of rectangle is " << res;

	getch();
}