#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();

	char str1[30], str2[30];

	cout << "\nEnter 1st any string: ";
	cin.getline(str1, 30);

	cout << "\nEnter 2nd any string: ";
	cin.getline(str2, 30);

	strcat(str1, str2);

	cout << "\nThe concated strings is " << str1;

	getch();
}