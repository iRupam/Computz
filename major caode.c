// The Build of Computz AI
// 26012019
//hidden data, ref computz lib.txt
#include<stdio.h>
#include<math.h>
int fun(int x){
    int y=2,z=3,temp;
    temp=x+y+z;
    return temp;
    }
void main()
{
    int num,ans;
    printf("Enter a number of yours\n");
    scanf("%d",&num);
    ans=fun(num);
    if(ans==1)
       printf("%d Congrats,you are the only one left to save the earth\n",ans );

    else
        printf("%d, Try again",ans);

}


