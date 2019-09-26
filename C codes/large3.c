#include<stdio.h>
int main(){
	int no1,no2,no3;
	printf("Enter three numbers\n");
	scanf("%d%d%d",&no1,&no2,&no3);
	if(no1==no2&&no2==no3){
		printf("All the numbers are same\n");
		}
	else if(no1>no2){
		if(no1>no3){
			printf("%d is largest\n",no1);
		}
		else{
			printf("%d is largest\n",no3);
		}
		}
	else if(no2>no3){
		printf("%d is largest\n",no2);
		}
	else{
		printf("%d is largest\n",no3);
	}
return 0;
}
