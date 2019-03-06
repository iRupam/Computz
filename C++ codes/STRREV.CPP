#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();

	char str[30];

	cout << "\nEnter any string or word: ";
	cin >> str;

	strrev(str);

	cout << "\nThe reverse string is " << str;

	getch();
}