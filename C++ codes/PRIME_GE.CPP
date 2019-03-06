#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();

	int i, j, start, end, cnt;

	cout << "\nEnter two nos.:";
	cin >> start >> end;

	for(j=start; j<=end; j++)
	{
		cnt = 0;
		for(i=1; i<=j; i++)
		{
			if(j%i == 0)
			{
				cnt++;
			}
		}

		if(cnt==2)
		{
			cout << "\n" << j;
		}
	}

	getch();
}