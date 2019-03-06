#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[10], size, i, res;

	cout << "\nEnter the size of any array (max 10):";
	cin >> size;

	cout << "\nEnter the values in array:";
	for(i=0; i<size; i++)
	{
		cin >> arr[i];
	}

	res = 0;

	for(i=0; i<size; i++)
	{
		res = res + arr[i];
	}

	cout << "\nThe sum of an array is " << res;

	getch();
}