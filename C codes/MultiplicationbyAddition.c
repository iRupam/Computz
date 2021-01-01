#include<stdio.h>
int main(){
    int num,mult,ans=0,count=0;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("Enter a multiple\n");
    scanf("%d",&mult);
    if(mult==0){
        ans=0;
    }
    else
    do{
        ans=ans+num;
        count++;
    }while(count<mult);
    printf("The answer of %d * %d is %d",num,mult,ans);
    return 0;
}
