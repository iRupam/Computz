#include<stdio.h>
int main()
{
    int no1, no2, rem=0, n1,n2;
    printf("Enter Two Non-Zero Integer Mumbers:");
    scanf("%d%d",&no1,&no2);
    n1=no1;
    n2=no2;
    rem=no1%no2;
    while(rem != 0)
    {
        no1=no2;
        no2=rem;
        rem=no1%no2;
    }
    printf("\n GCD of %d and %d is %d", n1,n2,no2);
    printf("\n LCM of %d and %d is %d",n1,n2,(n1*n2)/no2);
    return 0;
}
