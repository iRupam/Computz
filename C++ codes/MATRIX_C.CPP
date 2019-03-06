#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int rows, cols, arr[10][10], i, j, res;

	cout << "\nEnter the no. of rows of a matrix (Max 10):";
	cin >> rows;

	cout << "\nEnter the no. of cols of a matrix (Max 10):";
	cin >> cols;

	cout << "\nEnter the values for the matrix:";
	for(i=0; i<rows; i++)
	{
		for(j=0; j<cols; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "\n-----Current Matrix-----";
	for(i=0; i<rows; i++)
	{
		cout << "\n";
		for(j=0; j<cols; j++)
		{
			cout <<  arr[i][j] << "\t";
		}
	}

	for(i=0; i<cols; i++)
	{
		res = 0;
		for(j=0; j<rows; j++)
		{
			res = res + arr[j][i];
		}

		cout << "\nThe sum of col " << i+1 << " is " << res;
	}

	getch();
}