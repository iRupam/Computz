#include<iostream>
using namespace std;
class prog{
    public:
        int sum(int x,int y){
            int ans;
            ans=x+y;
            cout<<"The summation between "<<x<<" and "<<y<<" is "<<ans;
        }
    prog(){
            cout<<"I'm Constructor\n";
    }
    ~prog(){
            cout<<"\nI'm Destructor\n";
    }
};
int main(){
    int no1,no2;
    prog ob1;
    cout<<"Enter a number\n";
    cin>>no1;
    cout<<"Enter second number\n";
    cin>>no2;
    ob1.sum(no1,no2);
}
