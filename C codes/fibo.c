#include<stdio.h>
int main(){
    int limit,i,first=0,second=1,next;
    printf("Enter the limit\n");
    scanf("%d",&limit);
    printf("The fibonacci series upto %dth term \n",limit);
    for(i=0;i<limit;i++){
            printf("%d\n",first);
            next=first+second;
            first=second;
            second=next;
    }
    return 0;
    }
