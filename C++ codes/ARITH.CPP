#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	float a, b, add, sub, multi, div;

	cout << "\nEnter any two nos.:";
	cin >> a >> b;

	add = a+b;
	sub = a-b;
	multi = a*b;
	div = a/b;

	cout << "\nAddition: " << add;
	cout << "\nSubstraction: " << sub;
	cout << "\nMultiplicaton: "<< multi;
	cout << "\nDivision: " << div;

	getch();
}