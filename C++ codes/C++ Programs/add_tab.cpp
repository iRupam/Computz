#include<iostream>
using namespace std;
int main()
{
    int a=5,b=1,res,limit;
    cout<<"Enter the length of the table\n";
    cin>>limit;
    do
    {
        res=a*b;
        cout<<"\na= "<<a<<" b= "<<b<<" res= "<<res;
        b++;

    }while(b<=limit);

return 0;
}
