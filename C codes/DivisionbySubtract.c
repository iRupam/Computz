#include <stdio.h>
int main()
{
    int divd,divs,res=0,divd0,rem;
    printf("Enter the dividend\n");
    scanf("%d",&divd);
    printf("Enter the divisor\n");
    scanf("%d",&divs);
    divd0=divd;
    do{
        divd=divd-divs;
        res++;
    }while(divd>=0);
    if(divd<0)
        res=res-1;
    if(divd==0)
        res=res;
    rem=divd0-res*divs;
    printf("The quotient is %d\n",res);
    printf("The remainder is %d\n",rem);
    return 0;
}
