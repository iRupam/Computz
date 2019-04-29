#include<stdio.h>
void main()
{
	int a,b,res,i=1;
	printf("Enter the number of which you want table\n");
	scanf("%d",&a);
	printf("Enter the length of the table\n");
	scanf("%d",&b);
	while(i<=b){
		res=a*i;
		printf("%d*%d=%d\n",a,i,res);
		i++;
	}
}
