#include<stdio.h>
#include<math.h>
void main(){
    int usr=1111,psw=1234,usr1,psw1,flag=0;
    printf("***********STATE BANK OF INDIA**********\n");
    printf("Enter unique id\n");
    scanf("%d",&usr1);
    printf("\nEnter your PIN\n");
    scanf("%d",&psw1);
    if(usr1==usr&&psw1==psw)
        {
            printf("\nYou have logined successfully");
            flag++;
            }
    else
    do
    {
        scanf("%d",&usr1);
        scanf("%d",&psw1);
        flag++;
        if(usr1==usr&&psw1==psw)
        {
            printf("Login Success\n");
            break;
        }
    }while(flag<2);
    }
