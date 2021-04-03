#include<iostream.h>
#include<conio.h>
void main()
{
	int usr=1111,psw=1234,usr1,psw1,flag=0,attempt=2;
	cout<<"STATE BANK OF INDIA\n";
	cout<<"Enter Unique ID\n";
	cin>>usr1;
	cout<<"Enter your PIN\n";
	cin>>psw1;
	if(usr1==usr&&psw1==psw)
	{
		cout<<"\nYou have logined successfully\n";
		flag++;
	}

	else{
		do{
			cout<<"Incorrect Credentials!Attempts remaining: "<<attempt;
			attempt--;
			cout<<"\nEnter Unique ID\n";
	        cin>>usr1;
	        cout<<"Enter your PIN\n";
	        cin>>psw1;
			if(usr1==usr&&psw1==psw)
	        {
		        cout<<"\nYou have logined successfully\n";
		        break;
	        }
	        else
	        {
	            flag++;
	        }
		}while(flag<2);
    }
    
    if(flag>=2){
        cout<<"You have exceeded the limit of entering incorrect credentials.\n";
    }
    return 0;
}
