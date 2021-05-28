/*The Red Wedding (Public Contest: May 2021)
Your Grace, I feel I've been remiss in my duties. I've given you meat and wine and music, but I haven't shown you the hospitality you deserve. My King has married and I owe my new Queen a wedding gift.
Roose Bolton thinks of attacking Robb Stark, but since Catelyn has realised his traumatising idea, she signals Robb by shouting two numbers A and B. For Robb to understand the signal, he needs to solve the following problem with the two numbers:

Given A and B, find whether A can be transformed to B if A can be converted to A + fact(A) any number of times, where fact(A) is any factor of A other than 1 and A itself.
For example: A = 9, B = 14 can follow the given steps during conversion
A = 9 A9+3 12 (3 is a factor of 9)
A = 12 + 2 = 14 B (2 is a factor of 12)
Input
The first and the only line of input contains two numbers A and B.
Constraints
1 <= A, B < 10¹²
Output
Output "Yes" ( without quotes) if we can transform A to B, else output "No" (
without quotes)
*/

#include<bits/stdc++.h>
using namespace std;
long long int smallestDivisor(long long int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (long long int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
 
    return n;
}
int main()
{
    long long int a,b,count=0,count_0=0;
    cin>>a>>b;
    if(b<a)
    {
        cout<<"No";
    }
    else
    {
        
        while(a<b)
        {
            if(count_0==1000)
            {
                cout<<"Yes";
                count++;
                break;
            }
            if(a%(b-a)==0)
            {
                if(b-a==1||b-a==a)
                {
                    cout<<"No";
                    count++;
                    break;
                }
                else
                {
                    cout<<"Yes";
                    count++;
                    break;
                }
            }
            else
            {
                long long int x=smallestDivisor(a);
                if(x==a)
                {
                    cout<<"No";
                    count++;
                    break;
                }
                else if((b-a)%x==0)
                {
                    cout<<"Yes";
                    count++;
                    break;
                }
                a+=x;
                count_0++;
            }
        }
        if(a==b&&count==0)
        cout<<"Yes";
        else if(count==0)
        cout<<"No";
    }
}
