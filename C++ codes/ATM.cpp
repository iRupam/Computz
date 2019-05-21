#include<iostream.h>
#include<conio.h>
void main()
{
	int usr=1111,psw=1234,usr1,psw1,flag=0;
	cout<<"STATE BANK OF INDIA";
	cin>>usr1;
	cin>>psw1;
	if(usr1==usr&&psw1==psw)
	{
		cout<<"\nYou have logined successfully\n";
		flag++;
	}

	else
		do{
			cin>>usr1;
			cin>>psw1;
			flag++;
			
		if(usr1=usr&&psw1==psw)
		{
		cout<<"Login Success\n";
		break;
		}
		}while(flag<2);

}