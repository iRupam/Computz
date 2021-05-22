/*
Sara selects two different numbers from the range 1 to 50 and noted their sum as N. However later she Forgets which numbers she selected and now wants to know the total number of possible combinations she can have?
Sample Input: 8
Sample Output:3;
Explanation: (1,7), (2,6), (3.5)
*/
//Code by R. Medhi
#include <stdio.h>
int forgottenNumbers(int N){
int i=1,temp,pair=0;
temp=N/2+1;
for(i=1;i<temp;i++){
	if(i==N-i){
	    break;
	}
	else{
	printf("Pairs are: %d, %d\n",i,N-i);
	pair++;
}
}
return pair;
}
 
int main()
{
    int N=15,ans;
    ans=forgottenNumbers(N);
    printf("There are %d combinations to form sum of %d",ans,N);
    return 0;
}
