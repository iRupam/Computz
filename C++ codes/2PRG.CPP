#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,mul,addn,cod;
	cout<<"Enter two integers";
	cin>>a>>b;
	addn=a+b;
	mul=a*b;
	cout<<"ENter 1 for add and enter 2 for multiplication";
	cin>>cod;
	switch(cod)
	{

		case 1: cout<<"Addition is "<<addn<<endl;
		break;

		case 2:cout<<"Multiplication is"<<mul<<endl;
		break;

	}



}
