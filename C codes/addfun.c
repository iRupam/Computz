#include<stdio.h>
#include<math.h>
int sum(int x,int y){
	int z;
	z=x+y;
	return z;
}

void main(){
	int no1,no2,ans;
	printf("Enter two numbers\n");
	scanf("%d%d",&no1,&no2);
	ans=sum(no1,no2);
	printf("The summation between %d and %d is %d\n",no1,no2,ans);
}
