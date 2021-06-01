#include<stdio.h>
void main(){
	int no,i,flag=0;
	printf("Enter a number to check whether it's prime or not\n");
	scanf("%d",&no);
    for(i=2;i<=no/2;++i){
        if(no%i==0){
            flag=1;
            break;
        }
    }
	if(flag==0)
		printf("%d is a prime number\n",no);
	else
        printf("%d is not a prime numbet\n",no);
}
