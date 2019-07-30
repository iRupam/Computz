#include<stdio.h>
int main(){
    int no,i;
    printf("Enter a number\n");
    scanf("%d",&no);
    printf("Factors are:\n");
    for(i=2;i<=no;i++){
        if(no%i==0){
            printf("%d\n",i);
            }
            }
        }
