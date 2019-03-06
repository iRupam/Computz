#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int arr[10], size, i, max, min;

	cout << "\nEnter the size of any array (max 10):";
	cin >> size;

	cout << "\nEnter the values in array:";
	for(i=0; i<size; i++)
	{
		cin >> arr[i];
	}

	max = min =  arr[0];

	for(i=1; i<size; i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
		}
		else if(arr[i] < min)
		{
			min = arr[i];
		}
	}

	cout << "\nMax: " << max;
	cout << "\nMin: " << min;

	getch();
}