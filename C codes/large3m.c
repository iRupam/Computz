#include<stdio.h>
int main(){
    int no1,no2,no3,flag;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&no1,&no2,&no3);
    if(no1==no2&&no2==no3){
        printf("All the numbers are same\n");
    }
    else if(no1>=no2){
        flag=no1;
    }
    else{
        flag=no2;
    }
    if(flag>=no3){
        printf("%d is largest\n",flag);
    }
    else{
        printf("%d is largest\n",no3);
    }
    return 0;
    }
