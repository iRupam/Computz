
#include<math.h>
#include<stdio.h>
int func(int x, int y);
float main()
{
    int no1,no2,loc;
    printf("Enter the x coordinate and y coordinate\n");
    scanf("%d%d",&no1,&no2);
    loc=func(no1,no2);
    printf("The location is %d",loc);
}
int func(int x, int y){
    int ans;
    if (x<y)
        ans=-1;
    else if(x>y)
        ans=1;
    else
        ans=0;
    return ans;
}
