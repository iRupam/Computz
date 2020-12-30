#include <stdio.h>
int main()
{
    int divd,divs,res=0;
    printf("Enter the dividend\n");
    scanf("%d",&divd);
    printf("Enter the divisor\n");
    scanf("%d",&divs);
    do{
        divd=divd-divs;
        res++;
    }while(divd>=0);
    if(divd<0)
        res=res-1;
    if(divd==0)
        res=res;
    printf("The quotient is %d",res);

    return 0;
}
