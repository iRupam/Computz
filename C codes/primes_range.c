#include<stdio.h>
void main(){
	int low,high,i,flag;
	printf("Enter the lower limit\n");
	scanf("%d",&low);
	printf("Enter the upper limit\n");
	scanf("%d",&high);
	printf("prime numbers between %d and %d are\n",low,high);
	while(low<=high){
		flag=0;
		for(i=2;i<=low/2;++i){
			if(low%i==0){
				flag=1;
				break;
			}
		}
	if(flag==0)
		printf("%d\n",low);
	++low;
	}
}
