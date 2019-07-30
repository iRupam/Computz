#include<stdio.h>
int mul(int x,int y);
int fun(int x,int y){
	int z;
	z=mul(x,y);
	return z;
}

int mul(int x,int y){
	int m;
	m=x*y;
	return m;
}

void main(){
	int no1,no2,ans;
	printf("Enter Two Numbers\n");
	scanf("%d%d",&no1,&no2);
	ans=fun(no1,no2);
	printf("The result is %d",ans);
}
