#include<iostream.h>
#include<conio.h>
#include<string.h>

void main()
{
	clrscr();

	int len;
	char str[30];

	cout << "\nEnter any string or word: ";
	cin >> str;

	len = strlen(str);

	cout << "\nThe length is " << len;

	getch();
}