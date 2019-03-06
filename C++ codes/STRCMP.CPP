#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();

	int res;
	char str1[30], str2[30];

	cout << "\nEnter 1st any string: ";
	cin.getline(str1, 30);

	cout << "\nEnter 2nd any string: ";
	cin.getline(str2, 30);

	res = strcmp(str1, str2);

	if(res == 0)
	{
		cout << "\nBoth the strings are equal";
	}
	else
	{
		cout << "\nBoth the strings are not equal";
	}

	getch();
}