#include<stdio.h>
void main(){
	int arr[20];
	int i,max,min,size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter elements into the array\n");
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	max=arr[0];
	min=arr[0];
	for(i=0;i<size;i++) {
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("Max=%d\n",max);
	printf("Min=%d\n",min);
}
